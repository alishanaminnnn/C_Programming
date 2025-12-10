#include <stdio.h>
// Recursive function to find LCM (note: current logic has issues)
void lcm(int x, int y, int z){
    if (z % x == 0 && z % y == 0)  // Check if z is divisible by both x and y
    {
        printf("LCM is: %d", z);   // Print LCM if condition is true
    }
    else
    {
        return;                     // Stop recursion if not divisible (problematic)
    }
    lcm(x, y, z + 1);               // Recursive call to check next number
}
int main() {
    int a, b;
    printf("Enter a number:");
    scanf("%d", &a);                // Input first number
    printf("Enter a number:");
    scanf("%d", &b);                // Input second number
    // Iterative method to find LCM
    for (int i = 1; i <= a*b; i++)
    {
        if (i % a == 0 && i % b == 0)  // Check if i is divisible by both numbers
        {
            printf("LCM is: %d", i);   // Print LCM
            break;                      // Stop after finding first LCM
        }
    }
    return 0;
}
