#include <stdio.h>

int main() {
	int a,b;
	int cubic_formula;
	    printf("value of a =");
	scanf("%d",&a);
		printf("value of b =");
	scanf("%d",&b);
	cubic_formula=a*a*a-b*b*b-3*a*b*(a-b);
	    printf("The result of(a-b)^3 is : %d",cubic_formula);
		
	    return 0;
}
