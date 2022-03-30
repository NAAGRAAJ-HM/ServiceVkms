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
      module_Vkms(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, VKMS_CODE) InitFunction   (void);
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
         0x0000
      ,  0xFFFF
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
   CONSTP2CONST(CfgVkms_Type, CFGVKMS_CONFIG_DATA, CFGVKMS_APPL_CONST) lptrCfgVkms
){
   if(NULL_PTR == lptrCfgVkms){
#if(STD_ON == Vkms_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgVkms for memory faults
// use PBcfg_Vkms as back-up configuration
   }
   Vkms.IsInitDone = E_OK;
}

FUNC(void, VKMS_CODE) module_Vkms::DeInitFunction(void){
   Vkms.IsInitDone = E_NOT_OK;
}

FUNC(void, VKMS_CODE) module_Vkms::MainFunction(void){
}

class class_Vkms_Unused{
   public:
};

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

