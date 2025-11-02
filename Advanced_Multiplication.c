/*
------------------------------------------------------------
QUESTION:
Write a C program that prints multiplication tables from 
a given start number to an end number. 

For each table:
 - Skip printing the product if it is divisible by both 3 and 5.
 - Mark prime results with an asterisk (*).
 - Show the sum of each table.

After printing all tables:
 - Display the total sum of all products.
 - Display the smallest and largest product found.
 - If the total sum exceeds 10,000, print "Overflow Detected".
------------------------------------------------------------
*/

#include <stdio.h>

int main() {
    int start, end;
    int overallSum = 0;              // Keeps track of total sum across all tables
    int smallestProduct = 999999;    // Initialize with large value
    int largestProduct = -999999;    // Initialize with small value

    // --- Input section ---
    printf("Start from: ");
    scanf("%d", &start);
    printf("End at: ");
    scanf("%d", &end);

    // --- Loop through each number from start to end ---
    for (int num = start; num <= end; num++) {
        int tableSum = 0; // Sum of products in the current table

        printf("\nMultiplication Table of %d:\n", num);

        // --- Inner loop: multiplication from 1 to 10 ---
        for (int mul = 1; mul <= 10; mul++) {
            int result = num * mul;

            // --- Skip if divisible by both 3 and 5 ---
            if (result % 3 == 0 && result % 5 == 0) {
                printf("%d x %d = SKIP\n", num, mul);
                continue;
            }

            // --- Check if the result is a prime number ---
            int isPrime = 1;
            if (result < 2) {
                isPrime = 0; // Numbers < 2 are not prime
            } else {
                for (int check = 2; check <= result / 2; check++) {
                    if (result % check == 0) {
                        isPrime = 0; // Not prime if divisible
                        break;
                    }
                }
            }

            // --- Display result (mark * for primes) ---
            if (isPrime)
                printf("%d x %d = %d*\n", num, mul, result);
            else
                printf("%d x %d = %d\n", num, mul, result);

            // --- Update running totals ---
            tableSum += result;
            overallSum += result;

            // --- Track smallest and largest product ---
            if (result > largestProduct)
                largestProduct = result;
            if (result < smallestProduct)
                smallestProduct = result;
        }

        // --- Show sum for the current table ---
        printf("Sum of table %d = %d\n", num, tableSum);
    }

    // --- Final summary section ---
    printf("\nTotal Sum of All Tables = %d\n", overallSum);
    printf("Smallest product found = %d\n", smallestProduct);
    printf("Largest product found = %d\n", largestProduct);

    // --- Check for overflow condition ---
    if (overallSum > 10000)
        printf("Overflow Detected\n");

    return 0;
}
