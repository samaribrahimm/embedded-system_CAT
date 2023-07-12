#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf ("enter the number\n");
    scanf ("%d",&n);
    if (n%2==0){
        printf ("%d is even num\n",n);
    }
    else {
         printf ("%d is odd num\n",n);
    }


    return 0;
}
