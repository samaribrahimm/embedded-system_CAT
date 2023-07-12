#include <stdio.h>
#include <stdlib.h>

int main()
{
float h,salary;
printf("enter the working hours\n");
scanf("%f",&h);
salary=h*50;
if(h<40){
    salary=salary-salary*0.1;

}
printf("your salary is : %f",salary);
    return 0;
}
