#pragma once
/******************************************************************************/
/* File   : ServiceVkms.hpp                                                          */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceVkms.hpp"
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
      const ConstServiceVkms_Type* lptrConst = (ConstServiceVkms_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICEVKMS_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICEVKMS_CONST,       SERVICEVKMS_APPL_CONST) lptrConstModule
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

