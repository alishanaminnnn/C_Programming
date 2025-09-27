#include<stdio.h>

int main(){

    // Define prices for food items and delivery options
    int pizza=1000, burger=500, sandwich=200;
    int delivery1=100, delivery2=200, delivery3=300;

    // Display price list
    printf("--------------------\n");
    printf("|    PRICE LIST    |\n");
    printf("--------------------\n");
    printf("Pizza=1000\n");
    printf("Burger=500\n");
    printf("Sandwich=200\n\n\n");

    // Display deal details
    printf("--------------------\n");
    printf("|       DEALS      |\n");
    printf("--------------------\n");
    printf("1) If order value >= 3000 then, Free delivery + 10%% discount.\n");
    printf("2) If order value >= 1500 but < 3000 then, Delivery = 100.\n");
    printf("3) If order value >= 1000 but < 1500 then, Delivery = 200.\n");
    printf("4) If order value < 1000 then, Delivery = 300.\n\n");

    // Ask user if it's Sunday (to apply Sunday special deals)
    int sunday;
    printf("Press 1 if Today is Sunday : ");
    scanf("%d", &sunday);

    // Place Order
    printf("\n\n\n|PLACE ORDER|\n");
    int o_pizza;
    printf("Pizza: ");
    scanf("%d", &o_pizza);

    int o_burger;
    printf("Burger: ");
    scanf("%d", &o_burger);

    int o_sandwich;
    printf("Sandwich: ");
    scanf("%d", &o_sandwich);

    // Calculate totals for each item
    int Pizza_Total = o_pizza * pizza;
    int Burger_Total = o_burger * burger;
    int Sandwich_Total = o_sandwich * sandwich;

    // Calculate Grand Total (before delivery or discount)
    int Grand_Total = Pizza_Total + Burger_Total + Sandwich_Total;

    // Calculate Grand Totals for different scenarios
    int d_grand_total = (Grand_Total / 100) * 90;        // 10% discount
    int e_grand_total = Grand_Total + delivery1;         // Delivery = 100
    int f_grand_total = Grand_Total + delivery2;         // Delivery = 200
    int g_grand_total = Grand_Total + delivery3;         // Delivery = 300
    int s_grand_total = (Grand_Total / 100) * 80;        // 20% Sunday discount
    int ss_grand_total = Grand_Total;                    // No discount, free delivery on Sunday

    // Case 1: Order >= 3000
    if (Grand_Total >= 3000)
    {
        // Sunday special: 20% discount, free delivery
        if (sunday == 1)
        {
            printf("\n\n\n***SUNDAY SPECIAL DEALS***\n");
            printf("\nOrder Value=%d", Grand_Total);
            printf("\nDiscount=20%%");
            printf("\nDelivery=0.00");
            printf("\nGRAND TOTAL=%d", s_grand_total);
        }
        else
        {
            // Regular deal: 10% discount, free delivery
            printf("\n\nOrder Value=%d", Grand_Total);
            printf("\nDiscount=10%%");
            printf("\nDelivery=0.00");
            printf("\nGRAND TOTAL=%d", d_grand_total);
        }
    }

    // Case 2: Order >= 1500 and < 3000
    else if (Grand_Total >= 1500 && Grand_Total < 3000)
    {
        // Sunday special: free delivery, no discount
        if (sunday == 1)
        {
            printf("***SUNDAY SPECIAL DEALS***\n");
            printf("\n\nOrder Value=%d", Grand_Total);
            printf("\nDiscount =0.00%%");
            printf("\nDelivery =0.00");
            printf("\nGRAND TOTAL=%d", Grand_Total);
        }
        else
        {
            // Regular deal: delivery = 100
            printf("\n\nOrder Value=%d", Grand_Total);
            printf("\nDiscount =0.00%%");
            printf("\nDelivery =%d", delivery1);
            printf("\nGRAND TOTAL=%d", e_grand_total);
        }
    }

    // Case 3: Order >= 1000 and < 1500
    else if (Grand_Total >= 1000 && Grand_Total < 1500)
    {
        // Sunday special: free delivery, no discount
        if (sunday == 1)
        {
            printf("\n\n\n***SUNDAY SPECIAL DEALS***\n");
            printf("\nOrder Value=%d", Grand_Total);
            printf("\nDiscount=0.00%%");
            printf("\nDelivery=0.00");
            printf("\nGRAND TOTAL=%d", Grand_Total);
        }
        else
        {
            // Regular deal: delivery = 200
            printf("\n\nOrder Value=%d", Grand_Total);
            printf("\nDiscount=0.00%%");
            printf("\nDelivery=%d", delivery2);
            printf("\nGRAND TOTAL=%d", f_grand_total);
        }
    }

    // Case 4: Order < 1000
    else
    {
        // Sunday special: delivery still applies (probably a logic issue if it's meant to be free)
        if (sunday == 1)
        {
            printf("***SUNDAY SPECIAL DEALS***\n");
            printf("\n\nOrder Value=%d", Grand_Total);
            printf("\nDiscount=0.00%%");
            printf("\nDelivery=%d", delivery3);
            printf("\nGRAND TOTAL=%d", Grand_Total); // No delivery added
        }
        else
        {
            // Regular deal: delivery = 300
            printf("\n\nOrder Value=%d", Grand_Total);
            printf("\nDiscount=0.00%%");
            printf("\nDelivery=%d", delivery3);
            printf("\nGRAND TOTAL=%d", g_grand_total);
        }
    }

    return 0;
}
