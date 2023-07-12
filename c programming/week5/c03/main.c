 // c program that  defines 2 array and send them to fun. that apply scalar multiplication
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[]={1,6,7,8};
    int arr2[]={3,9,6,3};
    int len =sizeof arr1/ sizeof arr1[0];
    int scalar;
    scalar= fun (arr1,arr2,len);
    printf(" scalar  multiplication of two arrays = %d",scalar);
    return 0;
}
int fun (int arr1[],int arr2[],int len){
    int sum =0;
    for (int i =0;i<len;i++)
    sum =sum+ arr1[i]*arr2[i];
    return sum ;
}
