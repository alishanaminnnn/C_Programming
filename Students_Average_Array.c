// Q: Write a C program to store marks of 5 students in 4 subjects each, 
// calculate and display the average marks of each student.

#include<stdio.h>
int main(){
  
  // 2D array to store marks of 5 students (rows) in 4 subjects (columns)
  int students[5][4]={ {20,30,40,12},
                       {40,35,60,24},
                       {23,38,80,85},
                       {40,35,20,54},
                       {23,18,50,95} };

  // Loop through each student (row)
  for (int i=0; i<5 ; i++)
  {
    int sum=0; // to store total marks of one student

    // Loop through each subject (column)
    for (int j =0; j<4; j++)
    {
      sum = sum + students[i][j]; // add subject marks to sum
    }

    int avg = sum / 4; // calculate average marks for current student
    printf("\nThe average of student %d is %d", i+1, avg); // display average
  }

  return 0; // end of program
}
