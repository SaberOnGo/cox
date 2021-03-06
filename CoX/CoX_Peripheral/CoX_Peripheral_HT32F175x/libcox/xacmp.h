//*****************************************************************************
//
//! \file xacmp.h
//! \brief Defines and Macros for the analog comparator API.
//! \version V2.2.1.0
//! \date 5/14/2012
//! \author CooCox
//! \copy
//!
//! Copyright (c)  2011, CooCox 
//! All rights reserved.
//! 
//! Redistribution and use in source and binary forms, with or without 
//! modification, are permitted provided that the following conditions 
//! are met: 
//! 
//!     * Redistributions of source code must retain the above copyright 
//! notice, this list of conditions and the following disclaimer. 
//!     * Redistributions in binary form must reproduce the above copyright
//! notice, this list of conditions and the following disclaimer in the
//! documentation and/or other materials provided with the distribution. 
//!     * Neither the name of the <ORGANIZATION> nor the names of its 
//! contributors may be used to endorse or promote products derived 
//! from this software without specific prior written permission. 
//! 
//! THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
//! AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
//! IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
//! ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
//! LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
//! CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
//! SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
//! INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
//! CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
//! ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF 
//! THE POSSIBILITY OF SUCH DAMAGE.
//
//*****************************************************************************

#ifndef __xACMP_H__
#define __xACMP_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

//*****************************************************************************
//
//! \addtogroup CoX_Peripheral_Lib
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup ACMP
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xACMP
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xACMP_Analog_Src_Positive xACMP Positive(ACMP+) Input Source
//! \brief Analog comparator negative input select.
//!
//! \section xACMP_Analog_Src_Positive_Sec_Port CoX Port Details
//! \verbatim
//! +------------------------+----------------+----------------+
//! |xACMP ACMP+ Source      |       CoX      | HT32F175x/275x |
//! |------------------------|----------------|----------------|
//! |xACMP_ASRCP_PIN         |    Mandatory   |       Y        |
//! |------------------------|----------------|----------------|
//! |xACMP_ASRCP_REF         |  Non-Mandatory |       N        |
//! +------------------------+----------------+----------------+
//! \endverbatim
//! @{
//
//*****************************************************************************
//
//! Dedicated Comp+ pin
//
#define xACMP_ASRCP_PIN         0x00000000

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xACMP_Analog_Src_Negative xACMP Negative(ACMP-) Input Source
//! \brief Analog comparator Negative input select.
//!
//! \section xACMP_Analog_Src_Negative_Sec_Port CoX Port Details
//! \verbatim
//! +------------------------+----------------+--------------+
//! |xACMP ACMP- Source      |       CoX      |HT32F175x/275x|
//! |------------------------|----------------|--------------|
//! |xACMP_ASRCN_PIN         |    Mandatory   |      Y       |
//! |------------------------|----------------|--------------|
//! |xACMP_ASRCN_REF         |  Non-Mandatory |      N       |
//! +------------------------+----------------+--------------+
//! \endverbatim
//! @{
//
//*****************************************************************************

//
//! Dedicated Comp- pin
//
#define xACMP_ASRCN_PIN         0x00000000  


//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xACMP_Int_Ref_Voltage xACMP Internal Refrence Voltage
//! \brief Analog Comparator Internal Refrence Voltage select.
//!
//! There may be servral configurations of the internal Vref. Here is a list
//!  of the Vref.Values of Vref like xACMP_REF_*V, can be:
//! - xACMP_REF_?V - Example 2V
//! - xACMP_REF_?_?V - Example 2.1V
//! - xACMP_REF_?_??V - Example 2.13V
//! - xACMP_REF_?_???V - Example 1.375V
//! - xACMP_REF_?_????V - Example 1.2375V
//! .
//! \section xACMP_Int_Ref_Voltage_Sec CoX Port Details
//! \verbatim
//! +------------------------+----------------+---------------------------+
//! |xACMP Int Vref          |       CoX      |     HT32F175x/275x        |
//! |------------------------|----------------|---------------------------|
//! |xACMP_REF_*V            |    Mandatory   |     xACMP_REF_1_2V        |
//! +------------------------+----------------+---------------------------+
//! \endverbatim
//!
//! @{
//
//*****************************************************************************

//
//! Internal reference of 1.2V
//
#define xACMP_REF_1_2V          0x00000000

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xACMP_Comparator_IDs xACMP Analog Comparator ID
//! \brief Analog Comparator ID (index).
//!
//! The ID index is always like 0��? 1, and so on.
//!
//! \section xACMP_Comparator_IDs_Sec_Port CoX Port Details
//! \verbatim
//! +-------------------+----------------+--------------+
//! |xACMP ACMP ID      |       CoX      |HT32F175x/275x|
//! |---------------- --|----------------|--------------|
//! |xACMP_*            |    Mandatory   |   xACMP_0    |
//! |                   |                |   xACMP_1    |
//! +-------------------+----------------+--------------+
//! \endverbatim
//! @{
//
//*****************************************************************************

//
//! Comparator 0
//
#define xACMP_0             0x00000000

//
//! Comparator 1
//
#define xACMP_1             0x00000001

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup xACMP_Exported_APIs xACMP API
//! \brief Analog Comparator API Reference.
//!
//! \section xACMP_Exported_APIs_Port CoX Port Details
//!
//! \verbatim
//! +------------------------+----------------+--------------+
//! |xACMP API               |       CoX      |HT32F175x/275x|
//! |------------------------|----------------|--------------|
//! |xACMPConfigure          |    Mandatory   |      Y       |
//! |------------------------|----------------|--------------|
//! |xACMPEnable             |    Mandatory   |      Y       |
//! |------------------------|----------------|--------------|
//! |xACMPDisable            |    Mandatory   |      Y       |
//! |------------------------|----------------|--------------|
//! |xACMPIntCallbackInit    |    Mandatory   |      Y       |
//! |------------------------|----------------|--------------|
//! |xACMPIntEnable          |    Mandatory   |      Y       |
//! |------------------------|----------------|--------------|
//! |xACMPIntDisable         |    Mandatory   |      Y       |
//! +------------------------+----------------+--------------+
//! \endverbatim
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \brief Configures a comparator.
//!
//! \param ulBase is the base address of the comparator module.
//! \param ulCompID is the ID(index) of the comparator to configure.
//! Refrence \ref xACMP_Comparator_IDs.
//! \param ulConfig is the configuration of the comparator.
//!
//! This function configures a comparator.  The \e ulConfig parameter is the
//! result of a logical OR operation between the \b ACMP_ASRCP_xxx, 
//! and \b ACMP_ASRCN_xxx values.
//!
//! The \b ACMP_ASRCP_xxx is determines the ACMP+ source, 
//! values refrence \ref xACMP_Analog_Src_Positive.
//!
//! The \b ACMP_ASRCP_xxx is determines the ACMP- source:
//! values refrence \ref xACMP_Analog_Src_Negative.
//! 
//! \return None.
//
//*****************************************************************************

#define xACMPConfigure(ulBase, ulCompID, ulConfig)                            \
        ACMPConfigure(ulBase, ulCompID, ulConfig)

//*****************************************************************************
//
//! \brief Enable the comparator.
//!
//! \param ulBase is the base address of the comparator module.
//! \param ulCompID is the ID of the comparator.
//! Refrence \ref xACMP_Comparator_IDs.
//!
//! This function enables a comparator. 
//!
//! \return None.
//
//*****************************************************************************
#define xACMPEnable(ulBase, ulCompID)                                         \
        ACMPEnable(ulBase, ulCompID)

//*****************************************************************************
//
//! \brief Disable the comparator.
//!
//! \param ulBase is the base address of the comparator module.
//! \param ulCompID is the ID of the comparator.
//! Refrence \ref xACMP_Comparator_IDs.
//!
//! This function disables a comparator. 
//!
//! \return None.
//
//*****************************************************************************
#define xACMPDisable(ulBase, ulCompID)                                        \
        ACMPDisable(ulBase, ulCompID)

extern void xACMPIntCallbackInit(unsigned long ulBase, unsigned long ulCompID,
                                 xtEventCallback pfnCallback);

//*****************************************************************************
//
//! \brief Enable the comparator interrupt.
//!
//! \param ulBase is the base address of the comparator module.
//! \param ulCompID is the ID(index) of the comparator.
//! Refrence \ref xACMP_Comparator_IDs.
//!
//! This function enables generation of an interrupt from the specified
//! comparator.  Only comparators whose interrupts are enabled can be reflected
//! to the processor.
//!
//! \return None.
//
//*****************************************************************************
#define xACMPIntEnable(ulBase, ulCompID)                                      \
        ACMPIntEnable(ulBase, ulCompID, 3)

//*****************************************************************************
//
//! \brief Disable the comparator interrupt.
//!
//! \param ulBase is the base address of the comparator module.
//! \param ulCompID is the ID(index) of the comparator.
//! Refrence \ref xACMP_Comparator_IDs.
//!
//! This function disables generation of an interrupt from the specified
//! comparator.  Only comparators whose interrupts are enabled can be reflected
//! to the processor.
//!
//! \return None.
//
//*****************************************************************************
#define xACMPIntDisable(ulBase, ulCompID)                                     \
        ACMPIntDisable(ulBase, ulCompID, 3)

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F175x_275x_ACMP
//! @{
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup ACMP_INT_Type ACMP Interrupt Type
//! \brief Values that show ACMP Interrupt Type
//! Values that can be passed to ACMPIntEnable(),ACMPIntDisable() and 
//! ACMPIntClear().
//! @{
//
//*****************************************************************************

//
//! Comparator Output Rising Edge Interrupt
//
#define ACMP_INT_RISING         0x00000002

//
//! Comparator Output Falling Edge Interrupt 
//
#define ACMP_INT_FALLING        0x00000001

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F175x_275x_ACMP_Analog_Config HT32F175x_275x Configure
//! \brief Analog comparator Configure.
//! @{
//
//*****************************************************************************

//
//! Comparator negative input is selected as the reference input
//
#define ACMP_NEGATIVE_INPUT     0x00000000  

//
//! Comparator positive input is selected as the reference input
//
#define ACMP_POSITIVE_INPUT     0x00000008

//
//! Operational Amplifier mode
//
#define ACMP_MODE_OP            0x00000000

//
//! Comparator mode
//
#define ACMP_MODE_CMP           0x00000002

//
//! Configure mask
//
#define ACMP_CONFIG_MASK        0x0000000A

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! \addtogroup HT32F175x_275x_ACMP_Exported_APIs HT32F175x_275x ACMP API
//! \brief HT32F175x/275x ACMP API Reference.
//! @{
//
//*****************************************************************************

extern void ACMPConfigure(unsigned long ulBase, unsigned long ulCompID,
                          unsigned long ulConfig);
extern void ACMPCancellation(unsigned long ulBase, unsigned long ulCompID,
                             unsigned long ulInputRef);

extern void ACMPEnable(unsigned long ulBase, unsigned long ulCompID);
extern void ACMPDisable(unsigned long ulBase, unsigned long ulCompID);

extern void ACMPIntEnable(unsigned long ulBase, unsigned long ulCompID, 
                          unsigned long ulIntType);
extern void ACMPIntDisable(unsigned long ulBase, unsigned long ulCompID,
                           unsigned long ulIntType);

extern unsigned long ACMPIntStatus(unsigned long ulBase, unsigned long ulCompID);
extern unsigned long ACMPFlagStatus(unsigned long ulBase, unsigned long ulCompID);
extern void ACMPIntClear(unsigned long ulBase, unsigned long ulCompID,
                         unsigned long ulIntType);

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
//! @}
//
//*****************************************************************************

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __xACMP_H__
