#include<stdio.h>

int main(){
    float num1,num2;
    // Storing arithmetic operators in char variables
    char addition='+',divide='/',modulus='%',multiply='*',subtraction='-';
    char operand;

    printf("ARTHEMATIC OPERATION :");

    // Taking first number as float
    scanf("%f",&num1);

    // Taking operator as a character
    scanf("%c",&operand);

    // Taking second number as float
    scanf("%f",&num2);

    // Checking if operand is '+'
    if (operand==addition)
    {
        float add=num1+num2;   // Addition
        printf("%0.2f",add);
    }
    // Checking if operand is '-'
    else if (operand==subtraction)
    {
        float sub=num1-num2;   // Subtraction
        printf("%0.2f",sub);
    }
    // Checking if operand is '*'
    else if (operand==multiply)
    {
        float mult=num1*num2;  // Multiplication
        printf("%0.2f",mult);
    }
    // Checking if operand is '/'
    else if (operand==divide)
    {
        float div=num1/num2;   // Division
        printf("%0.2f",div);
    }
    // Checking if operand is '%'
    else if (operand==modulus)
    {
        int y,z;
        // Typecasting float values to int for modulus
        y=(int)num1;
        z=(int)num2;

        int mod=y%z;  // Modulus
        printf("%d",mod);
    }
    else
    {
        // If invalid operator entered
        printf("MATH ERROR");
    }

    return 0;
}
