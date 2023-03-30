#include <stdio.h>
#include <stdlib.h>
int fib(int n)
{
    if (n<=1){
        return n;
        }

  return(fib (n-1)+ fib (n-2));
}


int main()
{
 int num;
printf("enter a number that you want to find fibonacci \n");
scanf("%d",&num);
printf(" fib(%d)= %d",num,fib(num));
    return 0;
}

