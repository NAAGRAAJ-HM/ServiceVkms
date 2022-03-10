/*****************************************************/
/* File   : Vkms.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "infVkms_EcuM.h"
#include "infVkms_SchM.h"
#include "Vkms_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Vkms:
      public abstract_module
{
   public:
      FUNC(void, VKMS_CODE) InitFunction   (void);
      FUNC(void, VKMS_CODE) DeInitFunction (void);
      FUNC(void, VKMS_CODE) GetVersionInfo (void);
      FUNC(void, VKMS_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Vkms    Vkms;
infEcuMClient* gptrinfEcuMClient_Vkms = &Vkms;
infDcmClient*  gptrinfDcmClient_Vkms  = &Vkms;
infSchMClient* gptrinfSchMClient_Vkms = &Vkms;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, VKMS_CODE) module_Vkms::InitFunction(void){
}

FUNC(void, VKMS_CODE) module_Vkms::DeInitFunction(void){
}

FUNC(void, VKMS_CODE) module_Vkms::GetVersionInfo(void){
}

FUNC(void, VKMS_CODE) module_Vkms::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

