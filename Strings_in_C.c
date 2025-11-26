#include <stdio.h>

int main()
{
    // Declare a string (character array)
    // C automatically adds '\0' at the end
    char name[] = "alishan";

    // Index variable to go through each character in the string
    int i = 0;

    // Loop continues until we reach the null terminator '\0'
    while (name[i] != '\0')
    {
        // Print the current character
        printf("%c", name[i]);

        // Move to the next character
        i++;
    }

    return 0;
}
