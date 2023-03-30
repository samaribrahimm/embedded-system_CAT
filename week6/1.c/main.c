// c program to convert lowercase to uppercase
#include <stdio.h>
#include <stdlib.h>
int i;
int main()
{
    char *str =(char *)malloc(12*sizeof(char));
    printf("enter string : ");
    gets(str);

  while (str[i]!='\0'){
    if (str[i]>='a'&&str[i]<='z'){
        str[i]=str[i]-32;

        }
          i++;
  }
  printf("upper string : ");
    printf("%s",str);
    free(str);
    str='null';
    return 0;
}
