#include<stdio.h>

int main(){
int revenue=60;    // Initialize revenue with base fare 60
int i,a,c;         // Declare variables i, a, and c for loop control

// i controls count increment by 4, a controls seat number and c controls revenue
for ( int i=1,a=1,c=1; i<=60&&a<=15&&c<=15; i=i+4,a++,c++)
{
    revenue=c*60;  // Calculate total revenue per seat (passenger * 60)
    printf("The seat no#%d is booked, Total revenue :%d\n",a,revenue);  
    // Print seat number and revenue
}

printf("\n\nBus is full, Booking closed!\nTotal Revenue Collected=900");
// After loop ends, print message indicating all seats are booked

    return 0;  // End of program
}
