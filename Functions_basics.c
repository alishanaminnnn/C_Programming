#include <stdio.h>

// Function to multiply two numbers
int multiplication(int a,int b){
    int c;
    c = a * b;       // multiply a and b and store in c
    return(c);       // return the result
}

// Function to find the maximum of three numbers
int maximum(int c ,int d,int e){
    if (c > d && c > e)          // if c is greater than both d and e
    {
        return(c);
    }
    else if (d > c && d > e)     // if d is greater than both c and e
    {
        return (d);
    } 
    else                         // otherwise e is the greatest
    {
        return (e);
    }
}

// Function to calculate factorial of a number
int factorial(int a){
    int sum = 1;                 // initialize sum to 1
    for (int i = a; i > 0; i--)  // loop from a down to 1
    {
        sum = sum * i;           // multiply each number into sum
    }
    return (sum);                // return the final factorial value
}

int main() {

    int x, y, m, n, o, r, s;     // variable declarations

    // --- Multiplication Section ---
    printf("Enter the first number:");
    scanf("%d", &x);             // take first number input
    printf("Enter the second number:");
    scanf("%d", &y);             // take second number input
    int z = multiplication(x, y); // call multiplication function
    printf("the multiplication is %d", z); // print the result

    // --- Maximum Section ---
    printf("\n\nEnter the first number:");
    scanf("%d", &m);             // first input
    printf("Enter the second number:");
    scanf("%d", &n);             // second input
    printf("Enter the third number:");
    scanf("%d", &o);             // third input
    int q = maximum(m, n, o);    // call maximum function
    printf("The maximum is %d", q); // print the maximum value

    // --- Factorial Section ---
    printf("\n\nEnter a number:");
    scanf("%d", &r);             // input number for factorial
    int f = factorial(r);        // call factorial function
    printf("The factorial is %d", f); // print factorial result

    return 0;                    // end of program
}
