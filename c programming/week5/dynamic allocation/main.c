 // use realloc
 #include<stdio.h>
 #include<stdlib.h>
int main() {
int *ptr,i;

ptr = (int *)malloc(5*sizeof(int));
ptr[0]=1;
ptr[1]=2;
ptr[2]=3;
ptr[3]=4;
ptr[4]=5;
for(i = 0; i < 5; i++)
printf("%d\n",ptr[i]);

ptr = (int *)realloc(ptr, 7 * sizeof(int));
ptr[5] = 6;
ptr[6] = 7;
printf("after use realloc \n");

for(i = 0; i < 7; i++)
 printf("%d\n",ptr[i]);

free(ptr);
ptr= 'null';
return 0; }
