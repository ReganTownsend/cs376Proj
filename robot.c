/**
 * robot.c
 *
 * A file that contains the supporting functions for main() in the
 * ~/robots example source for Software Engineering.
 *

 * @author Tanya L. Crenshaw, Sully Cothran , Regan Townsend



 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;


  printf("Sully and Regan");

  for(i; i < num; i++)
    {
      printf("really ");
    }

  printf("loves robots!\n");

  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{
  int i = 0;
  char * space = "";
  char * sp0 = "";
  char * sp1 = "  ";
  char * sp2 = "    ";
  for(i = 0; i < 3; i++)
    {
      if( i == 1) space = sp1;
      else if( i == 2) space = sp2;
      
  printf("%s    i_i    \n"
	 "%s   [X_|]   \n"
	 "%s  /|___|\\  \n"
         "%s   d   b   \n", space,space,space,space); 
    }
}
