/*********************************************************************************************************************
* DAVE APP Name : EVENT_DETECTOR       APP Version: 4.0.6
*
* NOTE:
* This file is generated by DAVE. Any manual modification done to this file will be lost when the code is regenerated.
*********************************************************************************************************************/

/**
 * @cond
 ***********************************************************************************************************************
 *
 * Copyright (c) 2015, Infineon Technologies AG
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
 * 2015-02-16:
 *     - Initial version<br>
 *
 * 2015-05-08:
 *     - Comments updated<br>
 *
 * @endcond
 *
 */

/***********************************************************************************************************************
 * HEADER FILES
 **********************************************************************************************************************/
#include "event_detector.h"

/***********************************************************************************************************************
* DATA STRUCTURES
***********************************************************************************************************************/

/**
 * @brief Contents entered via GUI
 */
const XMC_ERU_ETL_CONFIG_t ED_SYNC_0_ETL_Config =
{
  .input_a = (uint32_t)XMC_ERU_ETL_INPUT_A0, /* Event input selection for A(0-3) */
  .input_b = (uint32_t)XMC_ERU_ETL_INPUT_B3, /* Event input selection for B(0-3) */
  .enable_output_trigger = (uint32_t)1,
  .status_flag_mode = (XMC_ERU_ETL_STATUS_FLAG_MODE_t)XMC_ERU_ETL_STATUS_FLAG_MODE_SWCTRL, /* enable the status flag 
                                                                                                   auto clear for opposite edge */									 
  .edge_detection = XMC_ERU_ETL_EDGE_DETECTION_RISING, /* Select the edge/s to convert as event */
  .output_trigger_channel = XMC_ERU_ETL_OUTPUT_TRIGGER_CHANNEL3, /* Select the source for event */
  .source = XMC_ERU_ETL_SOURCE_B
};


EVENT_DETECTOR_t ED_SYNC_0 = 
{
  .eru       = XMC_ERU1, /* ERU module assigned */    
  .channel   = 2U,    /* ERU channel assigned(0-3) */
  .config      = &ED_SYNC_0_ETL_Config, /* reference to hardware configuration */
  .init_status = false /* Initialized status */
};

		
/**
 * @brief Contents entered via GUI
 */
const XMC_ERU_ETL_CONFIG_t ED_SYNC_1_ETL_Config =
{
  .input_a = (uint32_t)XMC_ERU_ETL_INPUT_A3, /* Event input selection for A(0-3) */
  .input_b = (uint32_t)XMC_ERU_ETL_INPUT_B0, /* Event input selection for B(0-3) */
  .enable_output_trigger = (uint32_t)1,
  .status_flag_mode = (XMC_ERU_ETL_STATUS_FLAG_MODE_t)XMC_ERU_ETL_STATUS_FLAG_MODE_SWCTRL, /* enable the status flag 
                                                                                                   auto clear for opposite edge */									 
  .edge_detection = XMC_ERU_ETL_EDGE_DETECTION_RISING, /* Select the edge/s to convert as event */
  .output_trigger_channel = XMC_ERU_ETL_OUTPUT_TRIGGER_CHANNEL0, /* Select the source for event */
  .source = XMC_ERU_ETL_SOURCE_A
};


EVENT_DETECTOR_t ED_SYNC_1 = 
{
  .eru       = XMC_ERU1, /* ERU module assigned */    
  .channel   = 3U,    /* ERU channel assigned(0-3) */
  .config      = &ED_SYNC_1_ETL_Config, /* reference to hardware configuration */
  .init_status = false /* Initialized status */
};

		
