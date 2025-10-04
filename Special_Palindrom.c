#include<stdio.h>

int main(){
    int number;

    // Ask the user to enter a four-digit number
    printf("Enter a Four Digit Number :");
    scanf("%d",&number);

    // Extracting each digit from the number
    int first_digit = number / 1000;          // First digit
    int second_digit = (number / 100) % 10;   // Second digit 
    int third_digit = (number / 10) % 10;     // Third digit
    int last_digit = number % 10;             // Last digit

    // Sum of middle two digits
    int prime = second_digit + third_digit;

    // Check for special palindrome:
    // 1. Middle digits are equal (second == third)
    // 2. Sum of middle digits is a prime number (2,3,5,7,11,13,17)
    if (second_digit == third_digit && prime == 2 || prime == 3 || prime == 5 || prime == 7 || prime == 11 ||
        prime == 13 || prime == 17)
    {
        printf("Special Palindrome"); // If both conditions are satisfied
    }
    else
    {
        printf("Not Special Palindrome"); // Otherwise
    }

    return 0;
}
