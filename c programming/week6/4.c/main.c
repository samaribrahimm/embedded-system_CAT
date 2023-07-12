//c program to find the first occurance of a given char in string input
#include <stdio.h>
#include <stdlib.h>
int i=0,var;
int main()
{
    char *str =(char *)malloc(12*sizeof(char));
    char charr;
    printf("enter string : ");
    gets(str);
    printf("enter character to search : ");
    scanf("%c",&charr);

    while (str[i]!='\0'){
        if (charr==str[i]){
          var=i;
          break;
        }
        i++;
    }
    printf(" '%c' in %s at index %d",charr,str,var);
    return 0;
}
