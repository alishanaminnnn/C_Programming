#include<stdio.h>
int main(){

int i=0;
// Logic: This loop prints a left-aligned increasing triangle.
// Each new line adds one more '*' than the previous line.
while (i<=8)
{
    printf("\n");  // Move to the next line
    int j=0;
    while(j<=i)
    {
        printf("*");  // Print stars equal to the current row number
        j++;
    }
    i++;  // Go to next row
}

printf("\n");

int x=9;
// Logic: This loop prints a left-aligned decreasing triangle.
// Each new line has one less '*' than the previous line.
while (x>=0)
{
    printf("\n");  // Move to next line
    int y=0;
    while (y<=x)
    {
        printf("*");  // Print stars according to remaining count
        y++;
    }
    x--;  // Decrease number of stars for next line
}

printf("\n");

int g=0;
// Logic: This loop prints a right-aligned increasing triangle.
// Spaces are printed first, then stars increase each line.
while (g<=8)
{
    printf("\n");  // Move to next line
    int s=8;
    // Print spaces before the stars to shift pattern to the right
    while (s>=g)
    {
      printf(" ");
      s--;
    }
    int h=0;
    // Print increasing stars after the spaces
    while (h<=g)
    {
      printf("*");
      h++;
    }
    g++;  // Go to next row (one more star next line)
}

printf("\n");

int l=8;
// Logic: This loop prints a right-aligned decreasing triangle.
// Starts with full stars and gradually decreases stars each line.
while (l>=0)
{
    printf("\n");  // Move to next line
    int m=8;
    // Print spaces first to keep the pattern right-aligned
    while (m>=l)
    {
      printf(" ");
      m--;
    }
    int n=0;
    // Print stars after spaces (decreasing count each line)
    while (n<=m)
    {
      printf("*");
      n++;
    }
    l--;  // Decrease star count for next line
}

    return 0;
}
