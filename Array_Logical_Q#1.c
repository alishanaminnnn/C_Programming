// Q: Write a C program to find and display the common elements 
// between two arrays of 5 integers, and also print the indexes 
// where both arrays have the same value at the same position.

#include <stdio.h>

int main()
{
    // Declare and initialize two arrays
    int first[5] = {56, 4, 3, 9, 85};
    int second[5] = {51, 8, 3, 54, 6};
    int i, j;

    // Find and print elements that are common in both arrays (any position)
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (first[i] == second[j])
            {
                printf("The common element is %d\n", first[i]);
            }
        }
    }

    // Find and print indexes where both arrays have the same value
    for (i = 0; i < 5; i++)
    {
        if (first[i] == second[i])
        {
            printf("\nCommon at index %d", i);
        }
    }

    return 0; // end of program
}
