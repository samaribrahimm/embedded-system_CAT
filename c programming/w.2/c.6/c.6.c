#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result ;

   printf("enter result of 3*4\n");
    scanf ("%d",&result);
    for (;;){
         if(result!=12){
    printf("Try again\n");
    scanf ("%d",&result);
    }
    else {
         printf("Thanks\n");
         break;

    }

    }







    return 0;
}
