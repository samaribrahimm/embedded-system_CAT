#include <stdio.h>
#include <stdlib.h>
int sum =0;
int main()
{
 int array [5][5];
   for (int i=0;i<5;i++){
   for (int j=0;j<5;j++){
    printf("enter element in row %d and column %d ",i+1,j+1);
     scanf(" %d",&array[i][j]);
   }

   }
   printf("Row Totals");
   for (int i=0;i<5;i++){
   for (int j=0;j<5;j++){
     sum=sum +array[i][j];
   }

   printf(" %d",sum);
   sum=0;

   }
   printf("\n");

    printf("column Totals");
    for (int j=0;j<5;j++){
   for (int i=0;i<5;i++){
     sum=sum +array[i][j];
   }

   printf(" %d",sum);
   sum=0;

   }

    return 0;
}
