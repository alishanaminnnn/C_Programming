// Q: Write a C program to input 5 integers, display them in the same order,
// display them in reverse order (reading), and store them in reverse order (writing).

#include <stdio.h>

int main()
{
    int marks[5];
    int i, z, num;

    // Input 5 numbers from the user
    for (i = 0; i < 5; i++)
    {
        printf("Enter the number to save (0-4): ");
        scanf("%d", &num);
        marks[i] = num; // store input in array
    }  

    // Display numbers in entered order
    printf("The numbers are: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    // Display numbers in reverse order (reading)
    printf("The reverse are (reading): ");
    for (z = 4; z >= 0; z--) {
        printf("%d ", marks[z]);
    }
    printf("\n");

    // Store numbers in reverse order (writing)
    printf("The reverse are (writing): ");
    int arr1[5]; // new array to store reversed data
    for (z = 0; z < 5; z++) {
        arr1[z] = marks[4 - z]; // copy values in reverse
        printf("%d ", arr1[z]); // display reversed array
    }

    return 0; // end of program
}
