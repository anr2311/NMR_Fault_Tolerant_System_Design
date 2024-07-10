/*
 * File: TMR_Model.c
 *
 * Code generated for Simulink model 'TMR_Model'.
 *
 * Generated By : Aditya N Rao
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Wed Jul 10 04:32:37 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 */

#include "TMR_Model.h"

/* External inputs (root inport signals with default storage) */
ExtU rtU;

/* External outputs (root outports fed by signals with default storage) */
ExtY rtY;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* Model step function */
void TMR_Model_step(void)
{
  /* Performs the check using a basic offset function as can be seen from Simulink model */
  rtY.Output = ((rtU.Input + 5.0 == rtU.Input + 7.0) || (rtU.Input + 7.0 ==
    rtU.Input + 6.0) || (rtU.Input + 6.0 == rtU.Input + 5.0));
}

/* Model initialize function */
void TMR_Model_initialize(void)
{
  /* Performing basic initializations here */
  rtU.Input = 1;
}
