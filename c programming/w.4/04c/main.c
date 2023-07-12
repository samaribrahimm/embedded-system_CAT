//program to find repeating num
#include <stdio.h>
#include <stdlib.h>
int length;
int i,j;
int count ;
int main () {
 printf(" enter num of element ");
     scanf(" %d",&length);
      printf("\n");

   int array[length];
   for (int i=0;i<length;i++){
    printf("enter element %d  ",i+1);
     scanf(" %d",&array[i]);
   }
 for ( i=0;i<length;i++){
    for ( j=i+1;j<length;j++){
    if (array[i]==array[j]){
            count++;
       // break;

    }}
    if(count ==1){
       printf(" %d  is repeating num\n",array[i]);
       count =0;
    }
    else{
        count =0;
    }


 }
}
