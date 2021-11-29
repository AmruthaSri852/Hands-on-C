#include <stdio.h>
int main()
{	  
    int x,i;
  	scanf("%d",&x);
  
    if((x<100)&&(x!=42))
    {
		  printf("%d \n",x);
		return main(); 
    }
   return 0;
}
// sample input: 
// 1
// 2
// 88
// 42
// 99

// sample output:
// 1
// 2
// 88
