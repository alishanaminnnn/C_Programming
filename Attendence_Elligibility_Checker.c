#include<stdio.h>

int main(){

int total_classes;
int attended_classes;
float attendece_percentage;
    printf("Total Classes conducted: ");
scanf("%d",&total_classes);
    printf("Total Classes attended: ");
scanf("%d",&attended_classes);
attendece_percentage=((float)attended_classes/total_classes)*100;
    printf("Attendence PERCENTAGE: %0.2f",attendece_percentage);
(attendece_percentage>=75)? printf("\nstudent is allowed to sit in the exam"):
("student is not allowed to sit in the exam");
(attendece_percentage<=75)? printf("\nstudent is not allowed to sit in the exam"):
("student is allowed to sit in the exam");
    return 0;
}