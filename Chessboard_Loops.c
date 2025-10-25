#include<stdio.h>   // Include standard input/output header file

int main(){         // Main function starts
int a=0;            // Initialize variable 'a' to 0

while (a<=4)        // Outer loop runs while 'a' is less than or equal to 4
{

  int y=1;          // Initialize variable 'y' to 1
  while (y<=1)      // Inner loop runs once to print the first pattern line
  {
    printf("⬛⬜⬛⬜⬛⬜");   // Print first line pattern (black-white alternating)
    y++;             // Increment 'y' to exit inner loop
  }

  int z=1;           // Initialize variable 'z' to 1
  while (z<=1)       // Second inner loop runs once to print the second pattern line
  {
    printf("\n⬜⬛⬜⬛⬜⬛");  // Print second line pattern (white-black alternating)
    z++;              // Increment 'z' to exit loop
  }

  printf("\n");       // Print a newline to separate each pattern block
  a++;                // Increment 'a' for next iteration of outer loop

}

return 0;             // Return 0 to indicate successful execution
}
