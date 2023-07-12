#include <stdio.h>
#include <stdlib.h>
void swap (int *a,int *b);
int n1,n2;
int main()
{

    printf("enter two number\n");
    scanf ("%d \n %d",&n1,&n2);
    printf("before swap  num1=%d  num2=%d\n",n1,n2);
    swap(&n1,&n2);

    printf("after  swap  num1=%d  num2=%d\n",n1,n2);
    return 0;
}
void  swap (int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
