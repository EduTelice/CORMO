/* 
 * File:   main.c
 * Author: Eduardo David
 *
 * Created on 13 de diciembre de 2016, 23:04
 */

#include <stdio.h>
#include <stdlib.h>
#include<p18f2525.h>                                //      [[[[Include the PIC18F550 Headers]]]]]]
#include "Chip_Conf.h"
#include "ledSettings.h"


void delayzz(void)
{	int i, j;
	for(i=0;i<5000;i++)
     {
	for(j=0;j<2;j++)

             {       /* Well its Just a Timer */   }}}

void main(void)
{
	
  while(1)
		{

      LED_1on();
      LED_2off();
      LED_3on();
      LED_4off();
      delayzz();
      LED_1off();
      LED_2on();
      LED_3off();
      LED_4on();

	     }
}
/* THE END */
/*int main(int argc, char** argv) {

    return (EXIT_SUCCESS);
}

*/