#include<stdio.h>
int main(){
    int num1,num2;

    // Input first number
    printf("The First Number is  :");
    scanf("%d",&num1);

    // Input second number
    printf("The Second Number is :");
    scanf("%d",&num2);

    // Print multiples of num1
    printf("multiples of %d are :",num1);
    for ( int i = 1; i<=30; i++)   // loop to generate first 30 multiples
    {
        int multiple_num1=num1*i;  // calculate multiple of num1
        printf("%d,",multiple_num1); // print the multiple
    }
    printf("...\n");

    // Print multiples of num2
    printf("multiples of %d are :",num2);
    for ( int i = 1; i<=30; i++)   // loop to generate first 30 multiples
    {
        int multiple_num2=num2*i;  // calculate multiple of num2
        printf("%d,",multiple_num2); // print the multiple
    }
    printf("...\n");     

    // Print common multiples of num1 and num2 (up to 99)
    printf("Common multiples are :");
    for (int i =1; i <100; i++)    // loop from 1 to 99
    {
        if (i%num1==0 && i%num2==0) // condition: divisible by both numbers
        {
            printf("%d,",i);       // print common multiple
        }
    }
    printf("...\n");   

    // Try to print the Lowest Common Multiple (LCM)
    printf("Lowest Common multiples is :");
    for (int i =1; i <100; i++)    // loop from 1 to 99
    {
        if (i%num1==0&&i%num2==0)
        {
            printf("%d",i);        // print i as LCM
            break;                 
        }
    }

    return 0;
}
