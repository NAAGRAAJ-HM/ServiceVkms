/******************************************************************************/
/* File   : Vkms.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Vkms.hpp"
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
VAR(module_Vkms, VKMS_VAR) Vkms;

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
         lptrCfg = lptrCfgModule;
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

FUNC(void, VKMS_CODE) module_Vkms::DeInitFunction(
   void
){
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

FUNC(void, VKMS_CODE) module_Vkms::MainFunction(
   void
){
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

