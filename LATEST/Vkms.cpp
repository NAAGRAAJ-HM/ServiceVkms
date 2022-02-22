/*****************************************************/
/* File   : Vkms.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "Vkms_EcuM.h"
#include "Vkms_SchM.h"
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
   ,  public interface_Vkms_EcuM
   ,  public interface_Vkms_SchM
{
   public:
      FUNC(void, VKMS_CODE) InitFunction   (void);
      FUNC(void, VKMS_CODE) DeInitFunction (void);
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
module_Vkms Vkms;

interface_Vkms_EcuM *EcuM_Client_ptr_Vkms = &Vkms;
interface_Vkms_SchM *SchM_Client_ptr_Vkms = &Vkms;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, VKMS_CODE) module_Vkms::InitFunction(void){
}

FUNC(void, VKMS_CODE) module_Vkms::DeInitFunction(void){
}

FUNC(void, VKMS_CODE) module_Vkms::MainFunction(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

