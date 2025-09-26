#include<stdio.h>

int main(){
int seconds;
int hours;
int minutes;
int remaining_seconds;
printf("Enter Time in Seconds: ");
scanf("%d",&seconds);
hours=seconds/3600;
minutes = (seconds % 3600) / 60;
remaining_seconds = seconds % 60; 

printf("%d seconds= %d hours|%d minutes|%d seconds",seconds,hours,minutes,remaining_seconds);


return 0;
}