// Question: Write a C program that simulates a simple banking system. 
// The program should allow the user to deposit, withdraw, check balance, transfer money (with 2% fee), 
// and view the last three transactions (Deposit, Withdraw, Transfer). 
// Apply a $50 fine for insufficient withdrawal, and ask for confirmation before exit.

#include<stdio.h>

int main(){
    int BALANCE = 5000; // starting balance
    int choice, deposit, withdraw, transfer; // variables for menu choices and money operations
    char Ans, confirm; // characters for user responses (y/n)
    char op1 = 'N'; // oldest operation record
    char op2 = 'N'; // middle operation record
    char op3 = 'N'; // latest operation record

    do
    {
        // Display balance and main menu
        printf("\nYOUR BALANCE: %d$\n", BALANCE);
        printf("*******BANK MENU*******\n");
        printf("1. Deposit money\n");
        printf("2. Withdraw money\n");
        printf("3. Check balance\n");
        printf("4. Transfer money\n");
        printf("5. View history\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // ------------------- Deposit Option -------------------
        if (choice == 1)
        {
            printf("Enter Amount To Deposit (Less than 10,000$): ");
            scanf("%d", &deposit);

            // Check deposit amount
            if (deposit > 0 && deposit <= 10000)
            {
                BALANCE = BALANCE + deposit; // add to balance
                printf("Deposited %d$\n", deposit);
                printf("Updated Balance: %d$\n", BALANCE);

                // Shift history (op1 <- op2, op2 <- op3, op3 <- new operation)
                op1 = op2;
                op2 = op3;
                op3 = 'D'; // store 'D' for deposit
            }
            else
            {
                printf("Invalid deposit amount!\n");
            }
        }

        // ------------------- Withdraw Option -------------------
        else if (choice == 2)
        {
            printf("Enter Amount To Withdraw: ");
            scanf("%d", &withdraw);

            // if user has enough balance
            if (withdraw > BALANCE)
            {
                printf("Insufficient funds! 50$ fine applied.\n");
                BALANCE = BALANCE - 50; // apply fine only
            }
            else
            {
                BALANCE = BALANCE - withdraw; // deduct withdrawal
                printf("Withdrawn %d$\n", withdraw);
            }

            printf("Updated Balance: %d$\n", BALANCE);

            // Update history
            op1 = op2;
            op2 = op3;
            op3 = 'W'; // 'W' for withdraw
        }

        // ------------------- Check Balance Option -------------------
        else if (choice == 3)
        {
            printf("Your Current Balance is: %d$\n", BALANCE);
        }

        // ------------------- Transfer Option -------------------
        else if (choice == 4)
        {
            printf("Enter Amount To Transfer: ");
            scanf("%d", &transfer);

            // Check balance before transferring
            if (transfer > BALANCE)
            {
                printf("Insufficient funds for transfer!\n");
            }
            else
            {
                float fee = 0.02 * transfer; // 2% transaction fee
                BALANCE = BALANCE - transfer - fee; // deduct transfer + fee
                printf("Transferred %d$ (2%% fee = %.2f$)\n", transfer, fee);
                printf("Updated Balance: %d$\n", BALANCE);

                // Update history
                op1 = op2;
                op2 = op3;
                op3 = 'T'; // 'T' for transfer
            }
        }

        // ------------------- View History Option -------------------
        else if (choice == 5)
        {
            printf("\n----- MINI HISTORY -----\n");

            // Display last 3 operation types using letters stored
            printf("1. ");
            if (op1 == 'D') {
                printf("Deposit\n");
            }
            else if (op1 == 'W') {
                printf("Withdraw\n");
            }
            else if (op1 == 'T'){
                printf("Transfer\n");
            }
            else printf("None\n");

            // Next recent operation
            printf("2. ");
            if (op2 == 'D') {
                printf("Deposit\n");
            }
            else if (op2 == 'W') {
                printf("Withdraw\n");
            }
            else if (op2 == 'T') {
                printf("Transfer\n");
            }
            else {
                printf("None\n");
            }

            // Most recent operation
            printf("3. ");
            if (op3 == 'D') {
                printf("Deposit\n");
            }
            else if (op3 == 'W') {
                printf("Withdraw\n");
            }
            else if (op3 == 'T') {
                printf("Transfer\n");
            }
            else {
                printf("None\n");
            }
        }

        // ------------------- Exit Option -------------------
        else if (choice == 6)
        {
            printf("\nAre You Sure You Want To Exit? (y/n): ");
            scanf(" %c", &confirm);

            if (confirm == 'y' || confirm == 'Y')
            {
                break; // exit program if confirmed
            }
            else
            {
                continue; // go back to menu if user says no
            }
        }

        // ------------------- Invalid Input -------------------
        else
        {
            printf("Invalid choice! Please try again.\n");
        }

        // Ask user if they want another operation
        printf("\nDo you want to perform another operation? (y/n): ");
        scanf(" %c", &Ans);

    } while (Ans == 'y' || Ans == 'Y'); // repeat while user says yes

    printf("\nThank you for using our banking system!\n");
    return 0; // end program
}
