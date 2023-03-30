//program to find the second largest element in array

#include <stdio.h>
#include <stdlib.h>
int length;
int first_largest;
int second_largest;

int main()
{

    printf(" enter num of element ");
     scanf(" %d",&length);
      printf("\n");
   int array[length];

   for (int i=0;i<length;i++){
    printf("enter element %d  ",i+1);
     scanf(" %d",&array[i]);
   }

   if (array[0]>array[1]){
    first_largest=array[0];
    second_largest=array[1];
   }
   else {
     first_largest=array[1];
     second_largest=array[0];
   }
   for (int i= 2;i<length;i++){
    if (array[i]>first_largest){
        second_largest=first_largest;
        first_largest=array[i];
    }
    else if (array[i]>second_largest){
        second_largest=array[i];
    }
   }
   printf("first largest num =%d \n",first_largest);
   printf("second largest num =%d",second_largest);


    return 0;
}
