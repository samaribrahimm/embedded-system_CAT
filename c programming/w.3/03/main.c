#include <stdio.h>
#include <stdlib.h>
int count (int );
int main()
{
    int n;
   printf("enter  number\n");
    scanf("%d",&n);
   int x= count(n);
   printf("number of digits =%d ",x);
    return 0;
}
int count (int n)
{
 int c=0;
 while (n!=0){
    n=n/10;
    c++;
 }
  return c;
}
