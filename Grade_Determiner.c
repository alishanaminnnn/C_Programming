#include<stdio.h>
int main(){
int attendence;
printf("Enter Your Attendence(%%):");
scanf("%d",&attendence);
int assesment;
printf("Enter Your Assesment Marks:");
scanf ("%d",&assesment);
int final;
if (attendence>=75 && assesment>=40)
{
    printf("You are Eligible\nEnter Your Final Marks:");
    scanf("%d",&final);
    if (final>=90)
    {
        printf("Grade A+");
        if (attendence>=90)
        {
            printf(" and 100%% Scholarship granted");
        }
        
    }
    if (final>=80 && final<=90)
    {
        printf("Grade A");
        if (attendence>=85)
        {
            printf(" and 50%% Scholarship granted");
        }
        
    }
    if (final>=70 && final<=80)
    {
        printf("Grade B and no Scholarship granted");
    }
        if (final>=60 && final<=70)
    {
        printf("Grade C and no Scholarship granted");
    }
    if (final>=50 && final<=60)
    {
        printf("Grade D and no Scholarship granted");
    }
    if(final<50)
    {
        printf("Fail ");
    }  

    
}
else
{
    printf("Not Eligible For Finals");
}


    return 0;
}