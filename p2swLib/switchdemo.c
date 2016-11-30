#include <msp430.h>
#include "p2switches.h"
#define RED_LED BIT0

main()
{
<<<<<<< HEAD
  p2sw_init(100);
=======
  p2sw_init(1);
>>>>>>> 55c2de4f35b28a40060637346c087af332b0e698
  or_sr(0x8);			/* GIE (enable interrupts) */

  P1DIR |= RED_LED;
  for(;;) {
    P1OUT = (1 & p2sw_read());
  }
}

