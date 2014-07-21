/******************************************************************************
*
* Copyright (C) 2010 - 2014 Xilinx, Inc.  All rights reserved.
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in
* all copies or substantial portions of the Software.
*
* Use of the Software is limited solely to applications:
* (a) running on a Xilinx device, or
* (b) that interact with a Xilinx device through a bus or interconnect.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* XILINX CONSORTIUM BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF
* OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in
* this Software without prior written authorization from Xilinx.
*
******************************************************************************/

#include "xparameters.h"
#include "xycrcb2rgb.h"

/*
* The configuration table for devices
*/

XYCrCb2Rgb_Config XYCrCb2Rgb_ConfigTable[] =
{
	/*
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_DEVICE_ID,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_BASEADDR,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_S_AXIS_VIDEO_FORMAT,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_M_AXIS_VIDEO_FORMAT,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_HAS_DEBUG,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_HAS_INTC_IF,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_MAX_COLS,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_ACTIVE_COLS,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_ACTIVE_ROWS,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_MWIDTH,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_COEF_RANGE,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_ACOEF,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_BCOEF,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_CCOEF,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_DCOEF,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_ROFFSET,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_GOFFSET,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_BOFFSET,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_HAS_CLIP,
		XPAR_FMC_SENSOR_INPUT_YCRCB2RGB_1_HAS_CLAMP,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_RGBMAX,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_RGBMIN,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_S_AXI_CLK_FREQ_HZ,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_STANDARD_SEL,
		XPAR_FMC_SENSOR_INPUT_V_YCRCB2RGB_1_OUTPUT_RANGE
	,*/
	/*
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_DEVICE_ID,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_BASEADDR,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_S_AXIS_VIDEO_FORMAT,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_M_AXIS_VIDEO_FORMAT,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_HAS_DEBUG,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_HAS_INTC_IF,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_MAX_COLS,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_ACTIVE_COLS,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_ACTIVE_ROWS,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_MWIDTH,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_COEF_RANGE,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_ACOEF,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_BCOEF,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_CCOEF,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_DCOEF,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_ROFFSET,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_GOFFSET,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_BOFFSET,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_HAS_CLIP,
		XPAR_HDMI_OUTPUT_YCRCB2RGB_1_HAS_CLAMP,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_RGBMAX,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_RGBMIN,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_S_AXI_CLK_FREQ_HZ,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_STANDARD_SEL,
		XPAR_HDMI_OUTPUT_V_YCRCB2RGB_1_OUTPUT_RANGE

	*/
};