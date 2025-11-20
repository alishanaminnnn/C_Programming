#include<stdio.h>
int main(){
    int x=5;                        // integer variable x with value 5
    int *pointer=&x ;               // pointer storing the address of x

    printf("\nThe value of x is %d",x);                 // prints value of x (5)
    printf("\nThe address of x is %p",&x);              // prints memory address of x
    printf("\nThe value of *pointer is %d",*pointer);   // dereferencing pointer → value of x (5)
    printf("\nThe address of &pointer is %p\n",&pointer);   // prints memory address of pointer variable
    printf("The value of pointer is %p",pointer);       // prints the address stored in pointer (address of x)

    return 0;
}
