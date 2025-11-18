#include<stdio.h>

// Function to convert grade letter into grade points (GPA scale)
float obtained_grade(char grade){
       if (grade=='A'||grade=='a') return 4.0;
       if (grade=='B'||grade=='b') return 3.0;
       if (grade=='C'||grade=='c') return 2.0;
       if (grade=='D'||grade=='d') return 1.0;
       if (grade=='F'||grade=='f') return 0.0;
       else return -1.0; // invalid grade entered
}

// Function to calculate quality points of one subject
float subject_points(float grade, float credits) {
       return grade * credits;     
}

// Function to calculate overall GPA
float GPA(float a,float b){
       return a/b; // total quality points / total credits
}

#define GRADE 6  // Total number of subjects

int main(){
       printf("\nThe number of subjects are %d\n",GRADE);

       float grade_array[GRADE];   // Stores grade points of subjects
       float credits_array[GRADE]; // Stores credit hours of subjects

       float sum=0;   // Sum of all quality points
       float sum1=0;  // Sum of all credits

       // Loop to take input for each subject
       for (int i = 0; i < GRADE; i++)
       {
             char grade11;
             float total_credits;

             // Taking grade input
             printf("Grade in your subject is :");
             scanf(" %c",&grade11);

             // Convert grade letter to GPA points
             float grade12=obtained_grade(grade11);
             grade_array[i]=grade12;

             // Taking credit hours input
             printf("Enter  your subject Credits :");
             scanf("%f",&total_credits); 
             credits_array[i]=total_credits;

             // Calculate quality points for the subject
             float points = subject_points(grade12, total_credits);
             printf("Quality points for subject %d = %.1f\n\n", i+1, points);

             // Add to total sums
             sum=sum+points;    
             sum1=sum1+total_credits;
       }

       // Final GPA calculation
       float c_gpa=GPA(sum,sum1);
       printf("The Total GPA is %.1f",c_gpa);
}
