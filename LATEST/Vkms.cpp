/******************************************************************************/
/* File   : Vkms.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infVkms_EcuM.hpp"
#include "infVkms_Dcm.hpp"
#include "infVkms_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define VKMS_AR_RELEASE_VERSION_MAJOR                                          4
#define VKMS_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(VKMS_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible VKMS_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(VKMS_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible VKMS_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Vkms:
      public abstract_module
{
   public:
      module_Vkms(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, VKMS_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, VKMS_CONFIG_DATA, VKMS_APPL_CONST) lptrCfgModule
      );
      FUNC(void, VKMS_CODE) DeInitFunction (void);
      FUNC(void, VKMS_CODE) MainFunction   (void);
};

extern VAR(module_Vkms, VKMS_VAR) Vkms;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, VKMS_VAR, VKMS_CONST) gptrinfEcuMClient_Vkms = &Vkms;
CONSTP2VAR(infDcmClient,  VKMS_VAR, VKMS_CONST) gptrinfDcmClient_Vkms  = &Vkms;
CONSTP2VAR(infSchMClient, VKMS_VAR, VKMS_CONST) gptrinfSchMClient_Vkms = &Vkms;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgVkms.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Vkms, VKMS_VAR) Vkms(
   {
         VKMS_AR_RELEASE_VERSION_MAJOR
      ,  VKMS_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, VKMS_CODE) module_Vkms::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, VKMS_CONFIG_DATA, VKMS_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Vkms_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Vkms_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Vkms_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_Vkms as back-up configuration
      }
      IsInitDone = E_OK;
#if(STD_ON == Vkms_InitCheck)
   }
#endif
}

FUNC(void, VKMS_CODE) module_Vkms::DeInitFunction(void){
#if(STD_ON == Vkms_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Vkms_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Vkms_InitCheck)
   }
#endif
}

FUNC(void, VKMS_CODE) module_Vkms::MainFunction(void){
#if(STD_ON == Vkms_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Vkms_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == Vkms_InitCheck)
   }
#endif
}

class class_Vkms_Unused{
   public:
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

