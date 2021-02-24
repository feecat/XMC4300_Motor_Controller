/*
 * @file XMC4300_Motor_Controller
 * @date 24 FEB, 2021
 * @version 1.0
 *
 * @brief XMC4300 Core Board EtherCat demo example
 *
 * This example copy and modified from https://www.infineon.com/cms/en/product/promopages/aim-mc/dave_downloads.html
 *
 * CONFIG	:	ENA: P0.0
 *
 * Channel 0:	PWM: P2.2
 *				DIR: P1.5
 * Channel 1:	PWM: P2.3
 * 				DIR: P3.5
 * Channel 2:	PWM: P2.4
 * 				DIR: P5.0
 *
 */

#include <DAVE.h>               //Declarations from DAVE Code Generation (includes SFR declaration)
#include "SSC/Src/XMC_ESCObjects.h"

int32_t ActPos[3];
int32_t ActVel[3];
int32_t TarVel[3];
int32_t TarPos[3];
int32_t CtrlVel[3];
int32_t Acc[3];
int32_t Mode[3];
uint8_t Dir[3];
uint8_t Ena[3];

uint8_t Flg[3];
int32_t StartPos[3];
int32_t ProcessPos[3];
int32_t Config;

//Output Enable
	uint8_t outenable;
	void process_stopoutput(){outenable=false;}
	void process_startoutput(){outenable=true;}

//I Love ARDUINO
	void digitalWrite(XMC_GPIO_PORT_t *const port, const uint8_t pin,uint8_t value)
	{
		XMC_GPIO_SetOutputLevel(port,pin,(value==0||value==false)?XMC_GPIO_OUTPUT_LEVEL_LOW:XMC_GPIO_OUTPUT_LEVEL_HIGH);
	}

//PWM Interrupt
	void PWM_Counter_0()
	{
		uint8_t n = 0;
		ActPos[n] = (Dir[n]==0)?ActPos[n]+1:ActPos[n]-1;
		if ((Mode[n] == 1) && (ActPos[0] == TarPos[n])){
			ActVel[n] = 0;
			CtrlVel[n] = 0;
			TarVel[n] = 0;
			PWM_CCU4_Stop(&PWM_0);
		}
	}

	void PWM_Counter_1()
	{
		uint8_t n = 1;
		ActPos[n] = (Dir[n]==0)?ActPos[n]+1:ActPos[n]-1;
		if ((Mode[n] == 1) && (ActPos[0] == TarPos[n])){
			ActVel[n] = 0;
			CtrlVel[n] = 0;
			TarVel[n] = 0;
			PWM_CCU4_Stop(&PWM_1);
		}
	}

	void PWM_Counter_2()
	{
		uint8_t n = 2;
		ActPos[n] = (Dir[n]==0)?ActPos[n]+1:ActPos[n]-1;
		if ((Mode[n] == 1) && (ActPos[0] == TarPos[n])){
			ActVel[n] = 0;
			CtrlVel[n] = 0;
			TarVel[n] = 0;
			PWM_CCU4_Stop(&PWM_2);
		}
	}

//RAMP
	int32_t ramp(int32_t targetvel, int32_t actualvel, int32_t acc){
		if (targetvel > (actualvel + acc)){
			return (actualvel + acc);
		}else if (targetvel < (actualvel - acc)){
			return (actualvel - acc);
		}else{
			return (targetvel);
		}
	}

//Position Control
	int32_t PosCtrl(int32_t targetpos, int32_t actualpos, int32_t targetvel, int32_t actualvel, int32_t acc, uint8_t Channel)
	{
		int32_t time = abs(actualvel) / acc;
		int32_t accpos = ((time+ 20)* abs(actualvel) ) / 2000;

		if (targetpos > actualpos){//Position Movement
			if (targetpos < (actualpos + accpos)){
				return 30;
			}else{
				return targetvel;
			}
		}else if (targetpos < actualpos){//Negative Movement
			if (targetpos > (actualpos - accpos)){
				return -30;
			}else{
				return (-targetvel);
			}
		}
		//StandStill
		return 0;
	}

//Tick
	void Tick()
	{
		//Motor Position Control
		for (uint8_t i=0; i<4; i++){
			if (Mode[i] == 1){
				CtrlVel[i] = PosCtrl(TarPos[i], ActPos[i], TarVel[i], ActVel[i], Acc[i], i);
			}
		}

		//Run every millisecond;
		for (uint8_t i=0; i<4; i++){
			if (Mode[i] == 1){
				ActVel[i] = ramp(CtrlVel[i], ActVel[i], Acc[i]);//Profile Position
			}else if (Mode[i] == 3){
				ActVel[i] = ramp(TarVel[i], ActVel[i], Acc[i]);//Profile Velocity
			}else{
				ActVel[i] = 0;
			}
		}

		//Channel 0
		PWM_CCU4_SetFreq(&PWM_0, abs(ActVel[0]));
		if (ActVel[0] > 20){
			digitalWrite(P1_5, false);//Write to GPIO before start
			Dir[0] = 0;
			PWM_CCU4_Start(&PWM_0);
		}else if (ActVel[0] < -20){
			digitalWrite(P1_5, true);
			Dir[0] = 1;
			PWM_CCU4_Start(&PWM_0);
		}else{
			PWM_CCU4_Stop(&PWM_0);
		}

		//Channel 1
		PWM_CCU4_SetFreq(&PWM_1, abs(ActVel[1]));
		if (ActVel[1] > 20){
			digitalWrite(P3_5, false);//Write to GPIO before start
			Dir[1] = 0;
			PWM_CCU4_Start(&PWM_1);
		}else if (ActVel[1] < -20){
			digitalWrite(P3_5, true);
			Dir[1] = 1;
			PWM_CCU4_Start(&PWM_1);
		}else{
			PWM_CCU4_Stop(&PWM_1);
		}

		//Channel 2
		PWM_CCU4_SetFreq(&PWM_2, abs(ActVel[2]));
		if (ActVel[2] > 20){
			digitalWrite(P5_0, false);//Write to GPIO before start
			Dir[2] = 0;
			PWM_CCU4_Start(&PWM_2);
		}else if (ActVel[2] < -20){
			digitalWrite(P5_0, true);
			Dir[2] = 1;
			PWM_CCU4_Start(&PWM_2);
		}else{
			PWM_CCU4_Stop(&PWM_2);
		}
		//ENABLE
		digitalWrite(P0_0, Config >> 0 & 0x1);
	}

//GPIO INIT
	void Init_GPIO()
	{
		XMC_GPIO_CONFIG_t output = {.mode=XMC_GPIO_MODE_OUTPUT_PUSH_PULL};
		XMC_GPIO_CONFIG_t input = {.mode=XMC_GPIO_MODE_INPUT_TRISTATE};

		//P0_8 is DB_TRST,Must INIT Digital Function.Others pin is normal.
		XMC_GPIO_Init(P2_14,&input);
		XMC_GPIO_Init(P2_9,&input);

		XMC_GPIO_Init(P5_0,&output);
		XMC_GPIO_Init(P0_0,&output);
		XMC_GPIO_Init(P1_5,&output);
		XMC_GPIO_Init(P3_5,&output);
	}


void process_app(TOBJ7000 *OUT_GENERIC, TOBJ6000 *IN_GENERIC)
{
	IN_GENERIC->CH0_ActualMode 		= Mode[0];
	IN_GENERIC->CH0_ActualPosition 	= ActPos[0];
	IN_GENERIC->CH0_ActualVelocity	= ActVel[0];

	IN_GENERIC->CH1_ActualMode 		= Mode[1];
	IN_GENERIC->CH1_ActualPosition 	= ActPos[1];
	IN_GENERIC->CH1_ActualVelocity 	= ActVel[1];

	IN_GENERIC->CH2_ActualMode		= Mode[2];
	IN_GENERIC->CH2_ActualPosition 	= ActPos[2];
	IN_GENERIC->CH2_ActualVelocity 	= ActVel[2];

	IN_GENERIC->ActualConfig		= Config;

	if (outenable){
		TarVel[0] 	= OUT_GENERIC->CH0_ProfileVelocity;
		Acc[0] 		= OUT_GENERIC->CH0_ProfileACC;
		Mode[0] 	= OUT_GENERIC->CH0_Mode;
		TarPos[0] 	= OUT_GENERIC->CH0_ProfilePosition;

		TarVel[1] 	= OUT_GENERIC->CH1_ProfileVelocity;
		Acc[1] 		= OUT_GENERIC->CH1_ProfileACC;
		Mode[1] 	= OUT_GENERIC->CH1_Mode;
		TarPos[1] 	= OUT_GENERIC->CH1_ProfilePosition;

		TarVel[2] 	= OUT_GENERIC->CH2_ProfileVelocity;
		Acc[2] 		= OUT_GENERIC->CH2_ProfileACC;
		Mode[2] 	= OUT_GENERIC->CH2_Mode;
		TarPos[2] 	= OUT_GENERIC->CH2_ProfilePosition;

		Config 		= OUT_GENERIC->Config;
	}else{
		Config 		= 0;
		for (uint8_t i=0; i<4; i++){
			TarVel[i] = 0;
			Acc[i] = 0;
			Mode[i] = 0;
			TarPos[i] = 0;
		}
	}
}

int main(void)
{
  DAVE_STATUS_t status;
  status = DAVE_Init();                     /* Initialization of DAVE APPs  */
  Init_GPIO();                   /* Initialize GPIO */
  if(status == DAVE_STATUS_FAILURE)
  {
    /* Placeholder for error handler code. The while loop below can be replaced with an user error handler. */
    XMC_DEBUG("DAVE APPs initialization failed\n");
    while(1U)
    {
    }
  }
  /* Placeholder for user application code. The while loop below can be replaced with user application code. */
  while(1U)
  {
    MainLoop();
  }
}

/**

 * @brief SYNC0IRQHandler() - EtherCAT Interrupt Routine for SYNC0
 *
 * <b>Details of function</b><br>
 * This routine is handling the SYNC0 Interrupts and need to call the SSC Stack
 */
void SYNC0IRQHandler (void)
{
	Sync0_Isr();
}

/**

 * @brief SYNC1IRQHandler() - EtherCAT Interrupt Routine for SYNC1
 *
 * <b>Details of function</b><br>
 * This routine is handling the SYNC1 Interrupts and need to call the SSC Stack
 */
void SYNC1IRQHandler (void)
{
	Sync1_Isr();
}

/**

 * @brief ENABLE_ESC_INT_USER() - Enabling of user specific EtherCAT Interrupt Routines
 *
 * <b>Details of function</b><br>
 * This routine is called from ECAT_APP on request of SSC stack once interrupts (sync1/sync0) need to be enabled
 */
void ENABLE_ESC_INT_USER()
{
	INTERRUPT_Enable(&INT_SYNC0);
	INTERRUPT_Enable(&INT_SYNC1);
}

/**

 * @brief DISABLE_ESC_INT_USER() - Disabling of user specific EtherCAT Interrupt Routines
 *
 * <b>Details of function</b><br>
 * This routine is called from ECAT_APP on request of SSC stack once interrupts (sync1/sync0) need to be disabled
 */
void DISABLE_ESC_INT_USER()
{
	INTERRUPT_Disable(&INT_SYNC0);
	INTERRUPT_Disable(&INT_SYNC1);
}

