//C program to convert Celsius to Fahrenheit
//code input:
#include<stdio.h>

int main()
{
    float Celsius,Fahrenheit;  //intialize 

    printf("Enter the Temperature in Celsius: ");    //User input: temperature in Celsius  
    scanf("%f",&Celsius);

    Fahrenheit=((1.8)*Celsius)+32;  //Consider 9/5=1.8 (divisions are not preferable)

    printf("The Temperature in Fahrenheit: %0.2f\n",Fahrenheit);
   return 0;
}
//code output:
//Enter the Temperature in C: 1
//The Temperature in F: 33.80
//
