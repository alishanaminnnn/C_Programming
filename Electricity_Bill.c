#include<stdio.h>
int main(){
    int Consumer;   // Variable to store consumer type selection

    // Display options for consumer types
    printf("\n\n1.Domestic consumers press (1)\n2.Commertial consumers press (2)\n3.Industrial consumers press (3)\n\n");
    printf("CONSUMER TYPE :");
    scanf("%d",&Consumer);   // Take consumer type as input

    int units;   // Variable to store number of electricity units consumed

    // Switch statement to handle different consumer types
    switch (Consumer)
    {
    case 1: // Domestic consumer case
        printf("DOMESTIC CONSUMER");
        printf("\nUnits Consumed :");
        scanf("%d",&units);  // Input number of units consumed

        // Calculate bill based on unit slabs
        if (units<=100)
        {
            int bill=units*5;  // Rs.5 per unit for first 100 units
            printf("The Total Bill is %d",bill);
        }
        else if (units<=300)
        {
            int bill=(100*5)+(units-100)*7;  // Rs.5 for first 100 units, Rs.7 for next 200 units
            printf("The Total Bill is %d",bill);
        }
        else
        {
            int bill=(100*5)+(200*7)+(units-300)*10; // Rs.10 per unit above 300
            printf("The Total Bill is %d",bill);
        }    
        break;

    case 2: // Commercial consumer case
        printf("COMMERTIAL CONSUMER");
        printf("\nUnits Consumed :");
        scanf("%d",&units);  // Input number of units consumed

        // Calculate bill for commercial consumer
        if (units<=200)
        {
            int bill=units*8;  // Rs.8 per unit for first 200 units
            printf("The Total Bill is %d",bill);
        }
        else if (units<=300)
        {
            int bill=(200*8)+(units-200)*12; // Rs.12 per unit from 201 to 300
            printf("The Total Bill is %d",bill);
        }
        else
        {
            int bill=(200*8)+(300*12)+(units-500)*15; // Rs.15 per unit above 500
            printf("The Total Bill is %d",bill);
        }  
        break;

    case 3: // Industrial consumer case
        printf("INDUSTRIAL CONSUMER");
        printf("\nUnits Consumed :");
        scanf("%d",&units);  // Input number of units consumed

        // Calculate bill for industrial consumer
        if (units<=500)
        {
            int bill=units*15; // Rs.15 per unit for first 500 units
            printf("The Total Bill is %d",bill);
        }
        else if(units<=1000)
        {
            int bill=(500*15)+(units-500)*20; // Rs.20 per unit from 501 to 1000
            printf("The Total Bill is %d",bill);
        }   
        else
        {
            int bill=(500*15)+(units-500)*20; // Basic calculation for units > 1000
            int bill1=bill/100*10+bill; // Add 10% surcharge on total bill
            printf("The Total Bill is %d",bill1);
        }
        break;

    default:
        printf("WRONG KEY PRESSED"); // Invalid consumer type input
        break;
    }

    return 0; // End of program
}
