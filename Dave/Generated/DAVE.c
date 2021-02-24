
/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015-2019, Infineon Technologies AG
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,are permitted provided that the
 * following conditions are met:
 *
 *   Redistributions of source code must retain the above copyright notice, this list of conditions and the  following
 *   disclaimer.
 *
 *   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
 *   following disclaimer in the documentation and/or other materials provided with the distribution.
 *
 *   Neither the name of the copyright holders nor the names of its contributors may be used to endorse or promote
 *   products derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE  FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY,OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT  OF THE
 * USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * To improve the quality of the software, users are encouraged to share modifications, enhancements or bug fixes
 * with Infineon Technologies AG (dave@infineon.com).
 ***********************************************************************************************************************
 *
 * Change History
 * --------------
 *
 * 2014-06-16:
 *     - Initial version<br>
 * 2015-08-28:
 *     - Added CLOCK_XMC1_Init conditionally
 * 2018-08-08:
 *     - Add creation of projectData.bak file
 * 2019-01-30:
 *     - Fix creation of projectData.bak file
 * 2019-04-29:
 *     - Make DAVE_Init() weak, the user can reimplement the function
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "DAVE.h"

/***********************************************************************************************************************
 * API IMPLEMENTATION
 **********************************************************************************************************************/

/*******************************************************************************
 * @brief This function initializes the APPs Init Functions.
 *
 * @param[in]  None
 *
 * @return  DAVE_STATUS_t <BR>
 ******************************************************************************/
__WEAK DAVE_STATUS_t DAVE_Init(void)
{
  DAVE_STATUS_t init_status;
  
  init_status = DAVE_STATUS_SUCCESS;
     /** @Initialization of APPs Init Functions */
     init_status = (DAVE_STATUS_t)CLOCK_XMC4_Init(&CLOCK_XMC4_0);

  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of ECAT_SSC APP instance ECAT_SSC_0 */
	 init_status = (DAVE_STATUS_t)ECAT_SSC_Init(&ECAT_SSC_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of EVENT_DETECTOR APP instance ED_SYNC_0 */
	 init_status = (DAVE_STATUS_t)EVENT_DETECTOR_Init(&ED_SYNC_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of EVENT_GENERATOR APP instance EG_SYNC_0 */
	 init_status = (DAVE_STATUS_t)EVENT_GENERATOR_Init(&EG_SYNC_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of EVENT_DETECTOR APP instance ED_SYNC_1 */
	 init_status = (DAVE_STATUS_t)EVENT_DETECTOR_Init(&ED_SYNC_1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of EVENT_GENERATOR APP instance EG_SYNC_1 */
	 init_status = (DAVE_STATUS_t)EVENT_GENERATOR_Init(&EG_SYNC_1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_SYNC1 */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_SYNC1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_SYNC0 */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_SYNC0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of GLOBAL_CCU8 APP instance GLOBAL_CCU8_0 */
	 init_status = (DAVE_STATUS_t)GLOBAL_CCU8_Init(&GLOBAL_CCU8_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of PWM_CCU4 APP instance PWM_0 */
	 init_status = (DAVE_STATUS_t)PWM_CCU4_Init(&PWM_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of PWM_CCU4 APP instance PWM_1 */
	 init_status = (DAVE_STATUS_t)PWM_CCU4_Init(&PWM_1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of PWM_CCU4 APP instance PWM_2 */
	 init_status = (DAVE_STATUS_t)PWM_CCU4_Init(&PWM_2); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_PWM_0 */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_PWM_0); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_PWM_1 */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_PWM_1); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_PWM_2 */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_PWM_2); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of PWM_CCU4 APP instance PWM_Tick */
	 init_status = (DAVE_STATUS_t)PWM_CCU4_Init(&PWM_Tick); 
   } 
  if (init_status == DAVE_STATUS_SUCCESS)
  {
	 /**  Initialization of INTERRUPT APP instance INT_Tick */
	 init_status = (DAVE_STATUS_t)INTERRUPT_Init(&INT_Tick); 
   }  
  return init_status;
} /**  End of function DAVE_Init */

