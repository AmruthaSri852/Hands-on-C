//C program to calculate power of a number using while loop and for negative inputs
//code input:
#include <stdio.h>
int main()
{
    int base, exponent;
    float power = 1;
    int i;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int expo = exponent;
    while (expo < 0)
    {
        {
            power = power/base;
            expo++;
        }
    }
    if(exponent >0)
    {
        for(i = 1; i <= exponent; i++)
        {
            power = power * base;
        }
    }
    printf("%d ^ %d = %f", base, exponent, power);
    return 0;
}
//code output:
//Enter base: 2
//Enter exponent: -4
//2 ^ -4= 0.062500
