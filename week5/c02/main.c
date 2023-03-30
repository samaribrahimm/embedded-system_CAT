// c code that ask user to enter two num. and use pointer to change value of them
#include <stdio.h>
#include <stdlib.h>
int f(int *x,int *y){
    int sum ;
    sum= *x+ *y;
return sum;}
int main()
{
    int v1,v2,sum;
    printf("please enter 2 values\n");
    printf("value1 = ");
    scanf("%d",&v1);
    printf("value2 = ");
    scanf("%d",&v2);
   sum= f(&v1,&v2);
    printf("result of sum =%d",sum);
    return 0;
}

