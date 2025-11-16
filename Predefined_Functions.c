#include<stdio.h>    // For printf() and scanf()
#include<ctype.h>    // For toupper()
#include<math.h>     // For pow()
#include<stdlib.h>   // For abs()

int main() {

    // Ask user for an alphabet
    printf("Enter an Alphabet: ");
    char alphabet;
    scanf("%c", &alphabet);

    // Convert and display uppercase version
    printf("The uppercase of the letter %c is %c\n",
           alphabet, (char) toupper(alphabet));

    // Variables for exponent and base
    int a, b;

    // Ask user for exponent and base
    printf("Enter two numbers (first = exponent, second = base): ");
    scanf("%d %d", &a, &b);

    // Display power result
    // pow(base, exponent) returns a double
    printf("The value of the exponent %d^%d is %.1f\n",
           a, b, pow(a, b));

    // Variable for negative number input
    int c;

    // Ask user for a negative value
    printf("Enter a negative value: ");
    scanf("%d", &c);

    // Print absolute value
    printf("The absolute of %d is %d\n", c, abs(c));

    return 0;
}
