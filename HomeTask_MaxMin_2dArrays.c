#include<stdio.h>
int main(){
  
  int students[5][4]={ {20,30,40,12},
                       {40,35,60,24},
                       {23,38,80,85},
                       {40,35,20,54},
                       {23,18,50,95} };
                      int max=students[0][0];
for (int i=0; i<5 ; i++)
{
  int sum=0;
for (int j =0; j<4; j++)
{
              if (students[i][j] > max) {
                max = students[i][j];
            }
}
printf("MAX in student %d courses is %d\n",i,max);
}
  return 0;
}


#include<stdio.h>
int main(){
  
  int students[5][4]={ {20,30,40,12},
                       {40,35,60,24},
                       {23,38,80,85},
                       {40,35,20,54},
                       {23,18,50,95} };
                      int min=students[0][0];
for (int i=0; i<5 ; i++)
{
int min = students[i][0];
for (int j =0; j<4; j++)
{
              if (students[i][j] < min) {
                min = students[i][j];
            }
}
printf("MINIMUM in student %d courses is %d\n",i,min);
}
  return 0;
}