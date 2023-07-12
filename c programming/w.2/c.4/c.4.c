#include <stdio.h>
#include <stdlib.h>

int main()
{

  int Grade;
    printf("please enter your Grade\n");
    scanf ("%d",&Grade);
    if (Grade>=85){
    printf("Excellent\n");

    }
   else if (Grade<85&&Grade>=70){
    printf("very Good\n");

    }
   else if (Grade<70&&Grade>=55){
    printf("good\n");

    }
   else if (Grade<55&&Grade >=40){
    printf("pass\n");
   }
     else if (Grade<40){
    printf("you failed\n");
     }




    return 0;
}
