 //program in C to print all unique elements of an unsorted array.
#include <stdio.h>
#include <stdlib.h>
int length;
int j;
int main()
{
   printf(" enter num of element ");
    scanf(" %d",&length);
   int array[length];
   for (int i=0;i<length;i++){
    printf("enter element %d  ",i+1);
     scanf(" %d",&array[i]);
   }
   for (int i=0;i<length;i++){
    for (j=0;j<i;j++){
    if (array[i]==array[j]){
        break;

    }}
 if (i==j){
   printf("%d",array[j]);
}


   }


    return 0;
}
