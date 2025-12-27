#include <stdio.h>

int main()
{

    int arr[3] = {1, 2, 3}; // Integer array with 3 elements stored in contiguous memory
    int *ptr;               // Pointer to an integer

    ptr = &arr[0]; // ptr stores the base address of the array (address of first element)

    printf("%d", ptr); // Prints the value of ptr (i.e., the memory address of arr[0])

    int address_of_i = ptr + 1; // Pointer arithmetic:
                                // ptr + 1 moves to the next integer location
                                // New address = base address + (1 × size of int)

    printf("\n%d", address_of_i); // Prints the address of the next array element (arr[1])

    return 0; // Program ends successfully
}
