#include <stdio.h>
#include <stdlib.h>


int main()
{
     int num1,num2,num3;
    printf("please enter num1\n");
    scanf ("%d",&num1);
    printf("please enter num2\n");
    scanf ("%d",&num2);
    printf("please enter num3\n");
    scanf ("%d",&num3);
    if (num1>=num2&&num1>=num3){
    printf("%d is maximum\n",num1);
    }
    else if (num2>=num1&&num2>=num3){
    printf("%d is maximum\n",num2);
    }
    else {
      printf("%d is maximum\n",num3);
    }
    return 0;
}
