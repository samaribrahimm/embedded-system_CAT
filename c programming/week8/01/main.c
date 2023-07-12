 //


#include <stdio.h>
#include <stdlib.h>
struct employes{
    char *name;
   float salary;
   float bonus;
   float deducation;
};
int i,x;
void Total_value (struct employes *employee){
       for(int i=0;i<3;i++){
    float total = (employee[i].salary*((100-employee[i].deducation)/100))+employee[i].bonus;
    printf(" Total salary of %s %f\n",employee[i].name ,total);
       }
}
int main()
{
   struct employes employee[3]={{.name="mohsen"},{.name="maged"},{.name="mariam"}};

   printf("enter the salary ,bonus and deducation about  the three employees\n\n");
   printf("--------------------------------------------------------------------\n");
for (i=0;i<3;i++){
    printf(" %s\n ",employee[i].name);
    printf("\n");
   printf("salary = ");
   scanf("%f",&employee[i].salary);
   printf("bonus = ");
   scanf("%f",&employee[i].bonus);
   printf("deducation = ");
   scanf("%f",&employee[i].deducation);
 printf("-------------------------------\n");
}

   printf("\n");
   Total_value(employee);
    return 0;
}
