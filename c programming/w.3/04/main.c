#include <stdio.h>

int login_check(int ,int ,int);
int x=1;
int ID,pass;

int main(){

    printf("Enter The ID: ");
    scanf("%d", &ID);
    printf("Please enter the password :");
    scanf("%d",&pass);
    login_check( ID,pass,x);

return 0;
}


int login_check(int  ID,int pass,int x){
  {
		if (ID==2020 && pass==1032002){
        printf("welcome\n");
      return 0;
     }


      else if ( ID !=2020 || pass!=1032002){
         if (x==3){
          printf ("no more tries");
          return 0;

  }
      else{

      printf ("you are not registered\n");
      printf("\n");
      printf("enter your ID AND password again\n");
      printf("\n");
      printf("Enter The ID: ");
     scanf("%d", &ID);
     printf("Please enter the password :");
     scanf("%d",&pass);

    login_check(ID,pass,++x);

 }
}

	}
	return 0;
}
