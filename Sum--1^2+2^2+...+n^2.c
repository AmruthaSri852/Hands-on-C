//C program to print sum of squares of natural numbers
//code input:
#include<stdio.h>
int main()
{
    int Number, Sum=0;

    printf("Enter any positive integer: ");
    scanf("%d",&Number);

    Sum=(Number*(Number+1)*(2*Number+1))/6;

    printf("The sum of squares of series: %d\n", Sum);
   return 0;
}

//code output:
//Enter any positive integer: 2
//The sum of squares of series: 5
//
