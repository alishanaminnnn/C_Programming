#include <stdio.h>

// This function prints your name
void name()
{
    printf("4. my name is alishan\n");
}

// This function prints your school name,
// then calls the name() function
void school()
{
    printf("3. Elysian Higher Secondary School and College\n");
    name(); // calling name()
}

// This function prints your place,
// then calls school()
void place()
{
    printf("2. I am from gilgit\n");
    school(); // calling school()
    printf("5. bye\n");
}

int main()
{
    // Program starts here
    printf("1. hello World\n");

    place(); // calling place(), which then calls school(), then name()

    printf("6. bye bye"); // final message

    return 0;
}
