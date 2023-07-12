//count total num of alphabets ,digits or special char in string
#include <stdio.h>
#include <stdlib.h>
 int i=0,count_alp,count_digit,count_special;
int main()
{

  char *str =(char *)malloc(12*sizeof(char));
    printf("enter string : ");
    gets(str);

    while (str[i]!='\0'){
    if (str[i]>='a'&&str[i]<='z'){
    count_alp++;

        }
        else if(str[i]>='0'&&str[i]<='9'){
       count_digit++; }
       else{
        count_special++;
       }
          i++;
  }


printf("num of alphabets =%d \n num of digital =%d \n num of special char =%d",count_alp,count_digit,count_special);
    free(str);
    str='null';
    return 0;
}
