#ifndef switches_included
#define switches_included

#include "msp430.h"

unsigned int p2sw_read();
void p2sw_init(unsigned char mask);

#define SW1 BIT3	      /* switch1 is p1.3 */
#define SW2 BIT0              // switch is p2.0
#define SW3 BIT1              // switch is p2.1
#define SW4 BIT2              // switch is p2.2
#define SW5 BIT3              // switch is p2.3
#define SWITCHES SW1, SW2, SW3, SW4, SW5		/* only 1 switch on this board */

void switch_init();
void switch_interrupt_handler();
void buzzer_advance_frequency();
extern int switch_state_changed;

static int state;

extern char switch_state_down, switch1_state_down, switch2_state_down,
  switch3_state_down, switch4_state_down; /* effectively boolean */



#endif // included
