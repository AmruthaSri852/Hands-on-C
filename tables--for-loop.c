#include<stdio.h>
int main()
{
    int n,i;
    
    printf("Enter an integer: ");
    scanf("%d",&n);
    
    for(i=1;i<=10;++i) 
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    
   return 0;
}
//code output:
//Enter an integer: 19
//19 * 1 = 19
//19 * 2 = 38
//19 * 3 = 57
//19 * 4 = 76
//19 * 5 = 95
//19 * 6 = 114
//19 * 7 = 133
//19 * 8 = 152
//19 * 9 = 171
//19 * 10 = 190
//
