#include<stdio.h>

int main(){
    int total=0;     // Variable to store total size in MB
    int mbs=0;       // Variable to store individual program size input

    // Continue taking input until user enters -1
    while (mbs!=-1)
    {
        // Ask user to enter program size
        printf("Enter program size in MB(enter -1 to stop):");
        scanf("%d",&mbs);
       
        // If user enters -1, stop taking input
        if (mbs==-1)
        {
            break;
        }

        // Add program size to total
        total=total+mbs; 
    }

    // Convert total MBs into GBs (1 GB = 1024 MB)
    float gbs=total/1024.0;

    // Display total disk space used in GBs
    printf("\nTotal disk space used=%0.2f",gbs);

    return 0;
}
