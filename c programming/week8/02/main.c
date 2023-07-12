//c program to print grades for students and only admin can modify  grades
#include <stdio.h>
#include <stdlib.h>
// #include "file.h"
 int check,i,id_admincheck,id_studentcheck ;
 int id_admin =1032002;
void manipulate();
void printgrades(int i);
void check_id();
void admin();
struct grades {
    int id;
float programming_grade;
float data_stru_grade;
float discretemath_grade;
float Algorithms_grade;
}students[10];

int main()
{
for (int i=0;i<10;i++){
    students[i].id=1000+i;
    students[i].Algorithms_grade=43+i; //random grade
    students[i].programming_grade=17+i; //random grade
    students[i].data_stru_grade=23+i; //random grade
    students[i].discretemath_grade=76+i; //random
}
while(1){
printf("if you are admin enter 1 ,if you are student enter 0 =");
  scanf("%d",&check);
  if (check==1){
  admin();
  }


  else if(check==0){
   check_id();

  }


  else{
    printf("you enter wrong num\n ");
  }}
    return 0;
}
void printgrades(int i){

 printf("id = %d\n",students[i].id);
 printf("programming_grade = %f\n",students[i].programming_grade);
 printf("Algorithms_grade = %f\n",students[i].Algorithms_grade);
 printf("data_stru_grade = %f\n",students[i].data_stru_grade);
 printf("discretemath_grade = %f\n",students[i].discretemath_grade);
}
int x=0;// x is to check num of tries
void check_id(){
 printf("\n");
 printf("enter your Id : ");
 scanf("%d",&id_studentcheck);
 x++; //x is to check num of tries
 int counter=0;
 for (i=0;i<10;i++){

        counter++;
    if(id_studentcheck==students[i].id){
   printgrades(i);
   break;
  }

  }
 if(counter==10){

   if(x<=3){printf("wrong id...try again");
        check_id();}
   else{printf("wrong id...you Exceeded the maximum limit");}


  }}
  void admin(){
 printf("enter your Id : ");
  scanf("%d",&id_admincheck);
  if(id_admincheck==id_admin){
   printf("enter num of student that you want to modify his grades (1 to 10) =");
   //printf("enter your Id : ");
   int c;
   scanf("%d",&c);
   manipulate(c);}
   else {
     printf("you enter wrong ID ");
  }}
  void manipulate(int i){
       printf("students[i].id=%d\n",students[i-1].id);
       printf("enter his grades..\n");
       printf("students[i].Algorithms_grade=");
       scanf("%f",&students[i-1].Algorithms_grade);
       printf(" students[i].programming_grade=");
       scanf("%f",& students[i-1].programming_grade);
       printf("students[i].data_stru_grade=");
      scanf("%f",&students[i-1].data_stru_grade);
      printf("students[i].discretemath_grade=");
      scanf("%f",&students[i-1].discretemath_grade);

  }

