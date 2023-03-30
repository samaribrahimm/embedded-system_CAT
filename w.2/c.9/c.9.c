#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,fact=1,i=1;
    printf("enter num\n");
    scanf ("%d",&n);
    while (i<=n){
     fact =fact *i ;
     i++;

    }
    printf ("factorial of %d =%d",n,fact);
    return 0;
}
