/*
 * File:   sentido_do_motor.c
 * Author: Micro
 *
 * Created on 22 de Maio de 2021, 16:07
 */

#include "config.h"
#include "delay.h"
#include <xc.h>


char vetor[4] = {0x08, 0x04, 0x02, 0x01};

//void sentido(void)

void motor_init(void)
{
    ANSELH = 0;
    TRISC = 0x00;
    PORTC = 0x00;
}


void sentido(int x) 
{


}
