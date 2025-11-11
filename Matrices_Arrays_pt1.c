/*
-------------------------------------------
Question:
Write a C program to:
1. Take input for a 3x3 matrix.
2. Find and display the sum of the primary (main) diagonal elements.
3. Find and display the sum of the secondary (anti) diagonal elements.
-------------------------------------------
*/

#include <stdio.h>

#define ROWS 3     // Total number of rows in the matrix
#define COLUMN 3   // Total number of columns in the matrix

int main() {
    int matrix[ROWS][COLUMN];   // Declare a 3x3 matrix

    // Prompt user to enter matrix elements
    printf("Enter %d elements for a %dx%d matrix:\n", ROWS * COLUMN, ROWS, COLUMN);

    // Input elements into the matrix
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMN; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // --- Sum of the Primary Diagonal (top-left to bottom-right) ---
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        sum += matrix[i][i];
    }
    printf("\nThe sum of the primary diagonal is: %d\n", sum);

    // --- Sum of the Secondary Diagonal (top-right to bottom-left) ---
    int sum2 = 0;
    for (int i = 0, j = COLUMN - 1; i < ROWS && j >= 0; i++, j--) {
        sum2 += matrix[i][j];
    }
    printf("The sum of the secondary diagonal is: %d\n", sum2);

    return 0;
}
