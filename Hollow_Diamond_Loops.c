// Question: Write a C program that generates two diamond patterns based on user input. 
// The program should ask for height (odd number ≥ 3), a symbol (* or #), and density (hollow or filled). 
// For the first diamond, allow choosing between two styles: inner(*) with outer(#) or inner(#) with outer(*). 
// The second diamond should be a standard hollow or filled shape using the chosen symbol.

#include <stdio.h>

int main() {
    int height, duo;           // height for diamond size, duo for symbol combination selection
    char symbol, density;      // symbol = * or #, density = hollow or filled

    // --- Input Section ---
    printf("Height (odd number >= 3): ");
    scanf("%d", &height);

    printf("Symbol (* or #): ");
    scanf(" %c", &symbol);     // space before %c ignores leftover newline from previous input

    printf("Hollow or Filled (h/f): ");
    scanf(" %c", &density);

    // Duo choice determines which character is inner and which is outer
    printf("1. Inner(*) and Outer(#)\n2. Inner(#) and Outer(*)\nSelect (1 or 2): ");
    scanf("%d", &duo);

    printf("\n--------- DIAMOND 1 -----------\n");

    // --- Diamond 1 (with duo logic) ---
    if (duo == 1 || duo == 2) {
        // Upper half of diamond
        for (int i = 1; i <= height; i++) {
            // Print leading spaces
            for (int k = height; k > i; k--)
                printf(" ");

            // Print stars or hashes in each row
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (density == 'f') {
                    // Filled diamond with inner/outer difference
                    if (duo == 1)
                        printf("%c", (j == 1 || j == 2 * i - 1) ? '#' : '*');  // outer = #, inner = *
                    else
                        printf("%c", (j == 1 || j == 2 * i - 1) ? '*' : '#');  // outer = *, inner = #
                } else {
                    // Hollow diamond version
                    if (j == 1 || j == 2 * i - 1)
                        printf("%c", duo == 1 ? '#' : '*');    // border symbol
                    else
                        printf("%c", duo == 1 ? '*' : '#');    // inside symbol
                }
            }
            printf("\n"); // move to next row
        }

        // Lower half of diamond
        for (int i = height - 1; i >= 1; i--) {
            // Print leading spaces
            for (int k = height; k > i; k--)
                printf(" ");

            // Print row symbols
            for (int j = 1; j <= 2 * i - 1; j++) {
                if (density == 'f') {
                    // Filled lower half
                    if (duo == 1)
                        printf("%c", (j == 1 || j == 2 * i - 1) ? '#' : '*');
                    else
                        printf("%c", (j == 1 || j == 2 * i - 1) ? '*' : '#');
                } else {
                    // Hollow lower half
                    if (j == 1 || j == 2 * i - 1)
                        printf("%c", duo == 1 ? '#' : '*');
                    else
                        printf("%c", duo == 1 ? '*' : '#');
                }
            }
            printf("\n"); // move to next row
        }
    } else {
        // If user enters a number other than 1 or 2
        printf("Invalid choice selection.\n");
    }

    printf("\n\n----------------- DIAMOND 2 ---------------------\n");

    // --- Diamond 2 (basic hollow/filled diamond using single symbol) ---
    if (height % 2 != 0 && (symbol == '*' || symbol == '#') && (density == 'h' || density == 'f')) {
        // Upper half
        for (int i = 1; i <= height; i++) {
            // Leading spaces
            for (int k = height; k >= i; k--)
                printf(" ");

            // Left border symbol
            printf("%c", symbol);

            // Middle part (spaces for hollow, symbols for filled)
            for (int k = 1; k < 2 * i - 1; k++)
                printf("%c", (density == 'h') ? ' ' : symbol);

            // Right border symbol (skip for first row)
            if (i > 1)
                printf("%c", symbol);

            printf("\n");
        }

        // Lower half
        for (int i = height - 1; i >= 1; i--) {
            // Leading spaces
            for (int k = height; k >= i; k--)
                printf(" ");

            // Left border symbol
            printf("%c", symbol);

            // Middle part (spaces or symbols)
            for (int k = 1; k < 2 * i - 1; k++)
                printf("%c", (density == 'h') ? ' ' : symbol);

            // Right border symbol (skip for last row)
            if (i > 1)
                printf("%c", symbol);

            printf("\n");
        }
    } else {
        // Validation failed for height/symbol/density
        printf("\nInserted an EVEN number or Invalid Symbol or Wrong Character.\n");
    }

    return 0;
}
