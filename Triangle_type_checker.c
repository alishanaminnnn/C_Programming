#include<stdio.h>
int main(){
int x,y,z;
    printf("side 1: ");
scanf("%d",&x);
    printf("side 2: ");
scanf("%d",&y);
    printf("side 3: ");
scanf("%d",&z);
(x==y&&y==z)? printf("This is a EQUILAATERAL TRIANGLE"):printf(" ");
(x!=y&&y!=z)? printf("This is a SCALENE TRIANGLE") : printf(" ");
(x!=y&&y==z)? printf("This is a ISOSCELES TRIANGLE") : printf(" ");
(x==y&&y!=z)? printf("This is a ISOSCELES TRIANGLE") : printf(" ");
    return 0;
}