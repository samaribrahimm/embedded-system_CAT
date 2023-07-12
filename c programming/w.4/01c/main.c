// program to print ascending and descending num of array
#include <stdio.h>
#include <stdlib.h>

 int length;
 int var;
 int x;
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
  for (int i=0;i<length;i++){
   for (int j=i+1;j<length;j++){
    if (array[i]>array[j]){
        var=array[i];
        array[i]=array[j];
        array[j]=var;

   }

   }
  }
    printf("\n");
    printf(" enter 0 for ascending or enter 1 for descending ");
    scanf(" %d",&x);
    if (x==0){
             printf("\n");
             printf(" elements in ascending\n");
         for (int i=0;i<length;i++){
             printf("%d\n",array[i]);
         }
    }

    else if (x==1){
             printf("\n");
            printf(" elements in descending");
         for (int i=(length-1);i>=0;i--){
             printf("%d\n",array[i]);
         }
    }
    else {
         printf("\n");
       printf(" you enter wrong num ");
    }

    return 0;
}
