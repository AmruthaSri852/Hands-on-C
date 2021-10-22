//C program to check voter ID eligibility via age
//code input:
#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    
    if (age>=18)
    {
        printf("Your Voter ID found.");
    }
    else {printf("Not found, Check your age.");}
    return 0;
}

//code output:
//Enter your age: 14
//Not found, Check your age.
