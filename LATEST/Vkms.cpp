/******************************************************************************/
/* File   : Vkms.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.hpp"
#include "CfgVkms.hpp"
#include "infVkms_EcuM.hpp"
#include "infVkms_Dcm.hpp"
#include "infVkms_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define VKMS_AR_RELEASE_MAJOR_VERSION                                          4
#define VKMS_AR_RELEASE_MINOR_VERSION                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(VKMS_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible VKMS_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(VKMS_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible VKMS_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Vkms:
      public abstract_module
{
   public:
      FUNC(void, VKMS_CODE) InitFunction   (void);
      FUNC(void, VKMS_CODE) DeInitFunction (void);
      FUNC(void, VKMS_CODE) GetVersionInfo (void);
      FUNC(void, VKMS_CODE) MainFunction   (void);

   private:
      CONST(Std_TypeVersionInfo, VKMS_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Vkms, VKMS_VAR) Vkms;
CONSTP2VAR(infEcuMClient, VKMS_VAR, VKMS_CONST) gptrinfEcuMClient_Vkms = &Vkms;
CONSTP2VAR(infDcmClient,  VKMS_VAR, VKMS_CONST) gptrinfDcmClient_Vkms  = &Vkms;
CONSTP2VAR(infSchMClient, VKMS_VAR, VKMS_CONST) gptrinfSchMClient_Vkms = &Vkms;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, VKMS_CODE) module_Vkms::InitFunction(void){
   Vkms.IsInitDone = E_OK;
}

FUNC(void, VKMS_CODE) module_Vkms::DeInitFunction(void){
   Vkms.IsInitDone = E_NOT_OK;
}

FUNC(void, VKMS_CODE) module_Vkms::GetVersionInfo(void){
#if(STD_ON == Vkms_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, VKMS_CODE) module_Vkms::MainFunction(void){
}

class class_Vkms_Unused{
   public:
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

