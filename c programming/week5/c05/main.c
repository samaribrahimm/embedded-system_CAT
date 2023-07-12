//c coding to print values of x,y,z,px,py,pz,*px,*py,*pz
#include <stdio.h>
#include <stdlib.h>

int main()
{
int x,y,z;
int *px,*py,*pz;
//int *ps;
x=13,y=4,z=9;
px=&x;
py=&y;
pz=&z;
printf("x=%d\n",x);
printf("y=%d\n",y);
printf("z=%d\n",z);

printf("px=%d\n",px);
printf("py=%d\n",py);
printf("pz=%d\n",pz);

printf("*px=%d\n",*px);
printf("*py=%d\n",*py);
printf("*pz=%d\n",*pz);

printf("Swapping pointer\n");
//ps=pz;

pz=px,px=py,py=pz;
printf("x=%d\n",x);
printf("y=%d\n",y);
printf("z=%d\n",z);

printf("px=%d\n",px);
printf("py=%d\n",py);
printf("pz=%d\n",pz);

printf("*px=%d\n",*px);
printf("*py=%d\n",*py);
printf("*pz=%d\n",*pz);

    return 0;
}
