/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"

#include "cothran16.h"
#include "townsenr17.h"

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */
int main(int argc, const char * argv[])
{
  // Check the command line arguments.
  if(argc != 2) {
    robPrintAscii();
    return 0;
  }
  
  // Convert the command-line argument to a number.
  int num = atoi(argv[1]);

  robPrintAscii();

  robPrintMessage(num);
  cothran16();
  townsenr17();

  return 0;
}
