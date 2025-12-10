#include <stdio.h>
// Recursive function to display array elements in reverse order
void arr_display(int array[], int y)
{
    if (y == 0)              // Base case: stop recursion when size becomes 0
    {
        return;
    }
    printf("%d ", array[y - 1]); // Print the last element of current size
    arr_display(array, y - 1);   // Recursive call with reduced size
}
int main()
{
    int a;
    printf("How much you want to save:");
    scanf("%d", &a);          // Taking number of elements from user

    int arr[a];               // Declaring array of user-defined size
    // Taking elements input from user
    for (int i = 0; i < a; i++)
    {
        printf("Enter the element %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    arr_display(arr, a);      // Calling recursive function to display array
    return 0;
}
