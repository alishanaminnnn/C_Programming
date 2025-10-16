#include<stdio.h>
int main(){
    int input; // variable to store user input number
    printf("Enter any number :");
    scanf("%d", &input); // take input from user

    int digit = 0; // variable to store reversed number

    // loop to reverse the digits of the number
    for (int num = input; num > 0; num = num / 10) {
        // extract last digit using num % 10 and build reversed number
        digit = (digit * 10) + num % 10;
    }

    // print the reversed number
    printf("The reverse is %d", digit);

    // check if the original number and reversed number are same
    if (input == digit) {
        printf("\nSpecial Palindrome"); // number is palindrome
    } else {
        printf("\nNot special"); // number is not palindrome
    }

    return 0; // end of program
}
