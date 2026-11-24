/* 
 * File:   PWM.h
 * Author: E306_PC1
 *
 * Created on 21 octobre 2026, 16:25
 */

#ifndef PWM_H
#define	PWM_H
#define MOTEUR_DROIT 0
#define MOTEUR_GAUCHE 1

void InitPWM(void);
void PWMUpdateSpeed(void);
void PWMSetSpeedConsigne(float,char);

#endif	/* PWM_H */

