#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
printf ("enter number of row\n");
scanf ("%d",&x);
for (int i=1 ;i<=x;i++){
for (int j=1;j<=(2*x-1);j++){
     if ((j>= x-(i-1))&&(j<=x+(i-1) ) ) {
          printf("*");
     }

    else {
      printf(" ");
    }
}
   printf("\n");
}
    return 0;
}
