#include <stdio.h>
#include <stdlib.h>

int main()
{
 int ID ,password,x=1;
 printf("enter your ID\n");
 scanf ("%d",&ID);

 if (ID==1212){

    printf("enter your password\n");
    scanf ("%d",&password);

    while (x<=3){

      if (password!=1032002){
         if (x==3){
          printf ("no more tries");
          break;
 }
      printf ("you are not registered\n");
      printf("enter your password again\n");
      scanf ("%d",&password);
      x++;

}
else {

    printf("welcome\n");
 break;
   }
    }
     }
else {
    printf ("Wrong ID");
  }

    return 0;
}
