#include<stdio.h>
int main(){

float num1,num2;         // variables to store user input numbers
int y,z;                 // integer versions of numbers (for modulus calculation)
char operand;            // stores the operator entered by the user
char add,sub,div,mult,mod;  // variables to hold operator symbols

// assign operator symbols to variables
add='+',sub='-',div='/',mult='*',mod='%';

start:   // label for goto (used to repeat calculator)
printf("Enter Your First Number :");
scanf("%f",&num1);   // take first number as input

printf("Enter Operation :");
scanf(" %c",&operand);   // take operator (+, -, *, /, %) as input

printf("Enter Your Second Number :");
scanf("%f",&num2);   // take second number as input

// perform arithmetic operations
float addition=num1+num2;
float subtraction=num1-num2;
float multiplication=num1*num2;
float division=num1/num2;

y=(int)num1;   // convert num1 to integer for modulus
z=(int)num2;   // convert num2 to integer for modulus
int modulus=y%z;   // modulus (remainder of division)

// switch case to perform operation based on chosen operator
switch (operand)
{
case '+':
    printf("\nThe sum is %0.2f",addition);   // display addition
    break;
case '-':
    printf("\nThe subtraction is %0.2f",subtraction);   // display subtraction
    break;
case '*':
    printf("\nThe multiplication is %0.2f",multiplication);   // display multiplication
    break;
case '/':
    printf("\nThe division is %0.2f",division);   // display division
    break;
case '%':
    printf("\nThe modulus is %d",modulus);   // display modulus
    break;
default:
    printf("\nmath error");   // if user enters an invalid operator
}

// ask user if they want to continue
char yes='Y',no='N',choice;
printf("\nDo you want to perform another Calculation? (Y/N) :");
scanf(" %c",&choice);   // take user's choice

// decision-making based on choice
if (choice==yes)        // if user enters Y
{
    goto start;         // repeat calculator
}
else if (choice==no)    // if user enters N
{
    printf("Calculator Exited");   // exit message
}
else
{
    printf("\nmath error");   // invalid choice entered
}

    return 0;   // end of program
}
