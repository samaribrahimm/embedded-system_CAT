// change value use pointer
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int var =10;
  printf("value before pointer=%d\n",var);
  int *p=&var;
  *p=20;
   printf("value before pointer =%d\n",var);
    return 0;
}
