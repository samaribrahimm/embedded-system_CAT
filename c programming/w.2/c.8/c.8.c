#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
printf ("enter number which you want to print multip.table for\n ");
scanf ("%d",&x);
for (int i=1;i<=12;i++){
    printf("%d * %d =%d\n",x,i,x*i);
}
    return 0;
}
