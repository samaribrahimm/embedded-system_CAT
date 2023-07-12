#include <stdio.h>
#include <stdlib.h>

int main()
{

     int n;
    int sum;
     float avg;
     for (int i=1;i<=10;i++){
        printf("please enter num %d \n",i);
    scanf ("%d",&n);
    sum=sum+n;
     }
   avg =(float)sum/10;
   printf ("sum =%d\n",sum);
   printf ("average =%f\n",avg);



    return 0;
}
