//C program to calculate power of a number using for loop
//code input:
#include<stdio.h>
int main()
{
    int i,base, Expo;
    long power=1;

    printf("Enter the base value: ");
    scanf("%d",&base);
    printf("Enter the exponent value: ");
    scanf("%d",&Expo);

    for (i=1;i<=Expo;++i)
    {
        power=power*base;
    }
    printf("%d^%d=%d\n",base,Expo,power);
   return 0;
}

//code output:
//Enter the base value: 5
//Enter the exponent value: 4
//5^4=625
//
