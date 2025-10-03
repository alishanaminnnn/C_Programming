#include<stdio.h>
int main(){
    /* Write a C program to print those even numbers which are divisible by 4 between
    5–1000? */
    
    int i=2;   // loop counter
    int num1;  // variable to store multiples of 4
    
    // Loop runs from i=2 to i=250 (because 4*250 = 1000)
    for ( i; i<=250; i=i+1)
    {
        int num1 = 4*i;   // calculate multiple of 4
        printf("%d\n", num1);  // print the multiple
    }

    /* Write a C program to print the sum of even numbers between 5–1000? */
    // (Your code currently prints even numbers instead of summing them)

    printf("The Even Numbers Are\n");
    // Loop to print even numbers starting from 6 up to 1000
    for ( i=6; i<=1000; i=i+2)
    {
        printf("%d\n", i);
    }

    /* Write a C program to print the multiples of 7 between 5–1000? */
    printf("Multiples of 7 between 5 to 1000\n");
    // Loop runs from i=1 to i=142 (because 7*142 = 994 ≤ 1000)
    for (i=1; i<=142; i++)
    {
        int multiple = 7*i;   // calculate multiple of 7
        printf("7*%d is = %d\n", i, multiple);  // print in multiplication form
    }

    return 0;
}

