#include<stdio.h>
int main(){
    int a,b,c;   // three integers to store the digits

    // Input three digits from user
    printf("Enter First Digit :");
    scanf("%d",&a);
    printf("Enter Second Digit :");
    scanf("%d",&b);
    printf("Enter Third Digit :");
    scanf("%d",&c);

    // Check conditions to arrange digits in ascending order
    if (a>=b && b>=c)      // a is largest, b is middle, c is smallest
    {
        printf("The Order is: %d,%d,%d",c,b,a);
    }
    else if (b>=a && a>=c) // b is largest, a is middle, c is smallest
    {
        printf("The Order is: %d,%d,%d",c,a,b);
    }
    else if (c>=b && b>=a) // c is largest, b is middle, a is smallest
    {
        printf("The Order is: %d,%d,%d",a,b,c);
    }
    else if (a>=c && c>=b) // a is largest, c is middle, b is smallest
    {
        printf("The Order is: %d,%d,%d",b,c,a);
    }
    else if (b>=c && c>=a) // b is largest, c is middle, a is smallest
    {
        printf("The Order is: %d,%d,%d",a,c,b);
    }
    else   // remaining case: c is largest, a is middle, b is smallest
    {
        printf("The Order is: %d,%d,%d",b,a,c);
    }

    return 0;  // program ends
}