#pragma once
/******************************************************************************/
/* File   : ServiceVkms.hpp                                                   */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infServiceVkms_ServiceNvM_Types.hpp"
#include "CfgServiceVkms.hpp"
#include "ServiceVkms_core.hpp"
#include "infServiceVkms_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceVkms:
      INTERFACES_EXPORTED_SERVICEVKMS
      public abstract_module
   ,  public class_ServiceVkms_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEVKMS_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEVKMS_CONST,       SERVICEVKMS_APPL_CONST) lptrNvMBlocksRomModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICEVKMS_CONFIG_DATA, SERVICEVKMS_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICEVKMS_CODE) DeInitFunction (void);
      FUNC(void, SERVICEVKMS_CODE) MainFunction   (void);
      SERVICEVKMS_CORE_FUNCTIONALITIES
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
extern VAR(module_ServiceVkms, SERVICEVKMS_VAR) ServiceVkms;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

