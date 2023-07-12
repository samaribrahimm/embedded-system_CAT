#include <stdio.h>
#include <stdlib.h>
int Get_Max(int n1,int n2);
int main()
{
    int num1,num2;
  printf("enter two numbers\n");
  scanf("%d %d",&num1, &num2);
 int max= Get_Max(num1,num2);
 printf("max of %d and %d is %d",num1,num2,max);
    return 0;
}
int Get_Max(int n1,int n2){
    if (n1>n2){
   return n1;
    }
    else if (n2>n1){
        return n2;
    }

}
