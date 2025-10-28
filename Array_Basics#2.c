/*
   ❓ Question:
   Write a C program that stores 5 integer values entered by the user
   into an array named 'marks'. Then ask the user to enter an index (0–4)
   to display the value stored at that position in the array.
*/

#include <stdio.h>

int main()
{
    int marks[5]; // Declare an integer array of size 5
    int i, num;   // Variables for loop counter and user input

    // Input phase: store 5 numbers in the array
    for (i = 0; i < 5; i++)
    {
        printf("Enter the number to save (0-4): "); // Ask user for a number
        scanf("%d", &num);                          // Read the number
        marks[i] = num;                             // Store it in the array
    }

    // Output phase: allow user to access a specific array element
    printf("\nEnter the address to know the value (0-4): "); // Ask for an index
    scanf("%d", &num);                                       // Read the index
    printf("\nThe value is %d", marks[num]);                 // Display the value at that index

    return 0; // End of program
}
