// find reverse of a given string using loop
#include <stdio.h>
#include <stdlib.h>
#include <String.h>
int length;
int i=0;
int main()
{
     char *str =(char *)malloc(12*sizeof(char));
     char *str_rev =(char *)malloc(12*sizeof(char));
    printf("enter string : ");
    gets(str);
    length=strlen(str);
   // printf("%d",length);


    while (str[i]!='\0'){
         str_rev[i]=str[length-1-i];
         i++;
    }
    printf("reverse string : ");
    printf("%s",str_rev);

     free(str);
     str='null';
     free(str_rev);
    str_rev='null';
    return 0;
}
