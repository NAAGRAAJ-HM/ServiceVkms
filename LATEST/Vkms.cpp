/******************************************************************************/
/* File   : Vkms.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgVkms.hpp"
#include "Vkms_core.hpp"
#include "infVkms_Exp.hpp"
#include "infVkms_Imp.hpp"

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
      INTERFACES_EXPORTED_VKMS
      public abstract_module
   ,  public class_Vkms_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
            Std_TypeReturn          IsInitDone{E_NOT_OK};
      const CfgModule_TypeAbstract* lptrCfg{(CfgModule_TypeAbstract*)NULL_PTR};

   public:
      module_Vkms(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, VKMS_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, VKMS_CONFIG_DATA, VKMS_APPL_CONST) lptrCfgModule
      );
      FUNC(void, VKMS_CODE) DeInitFunction (void);
      FUNC(void, VKMS_CODE) MainFunction   (void);
      VKMS_CORE_FUNCTIONALITIES
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

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Vkms, VKMS_VAR) Vkms(
   {
#if(STD_ON == _ReSIM)
         "Vkms"
#else
#endif
      ,  VKMS_AR_RELEASE_VERSION_MAJOR
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
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgVkms;
         }
      }
      else{
#if(STD_ON == Vkms_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Vkms_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Vkms_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  VKMS_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, VKMS_CODE) module_Vkms::DeInitFunction(void){
#if(STD_ON == Vkms_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Vkms_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Vkms_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  VKMS_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, VKMS_CODE) module_Vkms::MainFunction(void){
#if(STD_ON == Vkms_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Vkms_InitCheck)
   }
   else{
#if(STD_ON == Vkms_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  VKMS_E_UNINIT
      );
#endif
   }
#endif
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

