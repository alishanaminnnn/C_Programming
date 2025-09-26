#include<stdio.h>
#include <time.h>

int main() {

    // Variables for quantities and calculations
	int a,b,c,d;             // quantities of rice, sugar, potatoes, apples
	int notes5000;           // count of 5000 notes
	int notes1000;           // count of 1000 notes
	int notes200;            // count of 200 notes
	int notes100;            // count of 100 notes
	int notes50;             // count of 50 notes
	int notes10;             // count of 10 notes
	int notes5;              // count of 5 notes
	int notes2;              // count of 2 notes
	int notes1;              // count of 1 notes
	int money_to_return;     // balance to return to customer
	int money=10000;         // amount paid (fixed 10,000 here)
	int rice=300;            // price per KG of rice
	int sugar=200;           // price per KG of sugar
	int potatoes=150;        // price per KG of potatoes
	int apples=400;          // price per KG of apples
	int sub_total;           // total grocery bill

    // decorative welcome message
 	printf("\n\n\n****************************************\n");
 	printf("WELCOME TO SMART UTILITY & SHOPPING HUB\n");
 	printf("****************************************\n");

	// Current Date & Time
	time_t tm;
    time(&tm);
    printf("Current Date/Time = %s", ctime(&tm));

    // Price list for grocery items
	printf("\n\n\n-------------------\n");
	printf(" PRICE LIST (per KG)\n");
	printf("-------------------\n");
	printf("1)Rice= 300\n2)Sugar=200\n3)Potatoes=150\n4)Apples=400\n\n\n");

    /* Asking user for required quantities of each item (in KG)
       and calculating total price of each item */
	printf("REQUIRED RICE(in KG) : ");
	scanf("%d",&a);
	int rice_price=a*rice;

	printf("REQUIRED SUGAR(in KG) : ");
	scanf("%d",&b);
	int sugar_price=b*sugar;

	printf("REQUIRED POTATOES(in KG) : ");
	scanf("%d",&c);
	int potatoes_price=c*potatoes;

	printf("REQUIRED APPLES(in KG) : ");
	scanf("%d",&d);
	int apples_price=d*apples;

	// Grocery Section
	printf("\n\n\n\n---GROCERY SECTION---");

	// Printing bill details for each item
    printf("\n\nTotal price of rice:%d\n",rice_price);
	printf("Total price of sugar:%d\n",sugar_price);
	printf("Total price of potatoes:%d\n",potatoes_price);
	printf("Total price of apples:%d\n\n",apples_price);

	// Calculating subtotal (all grocery items)
	sub_total=rice_price+sugar_price+potatoes_price+apples_price;
	printf("Grocery Grand total: %d",sub_total);

	// Printing summary: Grand total, amount paid, balance
	printf("\n\n\n--------------------\n");
    printf("Grand total: %d\n",sub_total);
    printf("Amount paid: %d\n",money);
    money_to_return=money-sub_total;
	printf("Balance returned: %d",money_to_return);

	// Currency denomination breakdown
	printf("\n\nNOTES\n");
	notes5000=money_to_return/5000;
    notes1000=(money_to_return%5000)/1000;
	notes200=(money_to_return%1000)/200;
	notes100=(money_to_return%200)/100;
    notes50=(money_to_return%100)/50;
	notes10=(money_to_return%50)/10;
	notes5=(money_to_return%10)/5;
	notes2=(money_to_return%5)/2;
	notes1=(money_to_return%2)/1;

	// Printing denomination breakdown
	printf("  5000= %d",notes5000);
	printf("\n  1000= %d",notes1000);
	printf("\n  200= %d",notes200);
	printf("\n  100= %d",notes100);
	printf("\n  50= %d",notes50);
	printf("\n  10= %d",notes10);
	printf("\n  5= %d",notes5);
	printf("\n  2= %d",notes2);
	printf("\n  1= %d",notes1);

	// Closing message
	printf("\n\n\n------------------------------\n");
	printf("THANK YOU FOR USING SMART HUB!\n\n\n");
	
	return 0;
}
