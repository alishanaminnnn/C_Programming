#include <stdio.h>

// Function to calculate diameter, circumference and area of a circle
void circle(int *d, float *c, float *a, int y)
{
    *d = 2 * y;        // Diameter = 2 × radius
    *c = 3.14 * y * y; // Circumference (incorrect formula, but not changing as requested)
    *a = 2 * 3.14 * y; // Area (incorrect formula, but not changing as requested)
}

int main()
{
    int radius, daimeter;      // Variables for radius and diameter
    float circumference, area; // Variables for circumference and area

    printf("The Radius is : ");
    scanf("%d", &radius); // Taking radius input

    // Calling function and passing addresses for storing calculated values
    circle(&daimeter, &circumference, &area, radius);

    // Printing the results
    printf("The daimeter is %d", daimeter);
    printf("\nThe circumference is %0.2f", circumference);
    printf("\nThe area is %0.2f", area);

    return 0;
}
