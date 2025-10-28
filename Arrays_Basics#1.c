/*
   This program stores 5 marks in an array and allows the user
   to enter an index number (0–4) to view the value stored at that index.
   If the user enters an invalid index (outside 0–4), the program displays
   "out of range!" and stops.
*/

#include <stdio.h>

int main()
{
    int marks[5] = {85, 90, 78, 92, 88}; // Declare and initialize an array of 5 integers
    int i, num;                          // Variables for loop counter and user input

    for (i = 0; i < 5; i++)
    {                                                            // Loop runs 5 times
        printf("\nEnter the address to know the value (0-4): "); // Ask user for an index
        scanf("%d", &num);                                       // Read user input

        // Check if the entered index is within the valid range (0 to 4)
        if (num <= 4 && num >= 0)
        {
            printf("%d", marks[num]); // Print the value at the entered index
        }
        else
        {
            printf("out of range!"); // Print an error message if index is invalid
            break;                   // Exit the loop
        }
    }

    return 0; // End of program
}
