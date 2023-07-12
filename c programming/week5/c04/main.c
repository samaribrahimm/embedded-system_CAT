//c program to  apply the  bubble sorting algorthm on an array and print it
 #include <stdio.h>
#include <stdlib.h>
void bubblesort (int array[],int length);
int main()
{
    int length;
     printf(" enter num of element ");
     scanf(" %d",&length);
      printf("\n");
   int array[length];
   for (int i=0;i<length;i++){
    printf("enter element %d  ",i+1);
     scanf(" %d",&array[i]);
   }
   bubblesort (array,length);
    return 0;
}
void bubblesort (int array[],int length){
    int swap ;
  for (int i=0;i<length;i++){
   for (int j=i+1;j<length;j++){
    if (array[i]>array[j]){
        swap=array[i];
        array[i]=array[j];
        array[j]=swap;

   }

   }
  }
  printf("\n");
             printf(" elements in ascending\n");
         for (int i=0;i<length;i++){
             printf("%d\n",array[i]);
         }
}
