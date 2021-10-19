//C program to print sum of cube of natural numbers
//code input:
#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    int sum=0;
    printf("Enter the n: ");
    scanf("%d",&n);
    sum=pow(((n*(n+1))/2),2);
    printf("Sum of the series: ");
    for (i=1;i<=n;++i)
    {
        if (i!=n)
            printf("%d^3+ ",i);
        else printf("%d^3=%d\n",i,sum);
    }
    return 0;
}

//code output:
//Enter the n: 3
//Sum of the series: 1^3+ 2^3+ 3^3=36
//
