#include<stdio.h>
int main(){
    int input;       // variable to store user input
    int counter = 0; // variable to count number of digits

    printf("Enter the number:");  // ask user for input
    scanf("%d", &input);          // read the number from user

    // loop runs until input becomes 0
    while (input > 0)
    {
        input = input / 10;  // remove the last digit from the number
        counter++;           // increase the digit counter by 1
    }

    // display the total number of digits
    printf("The Number of digits are %d", counter);

    return 0; // end of program
}
