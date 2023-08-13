#include<stdio.h>
#define SIZE_ARRAY 10
void unimodal(int a[],int left,int right){
    int mid =left+(right-left)/2;
    if(a[mid]<a[mid+1]){
   if(a[mid+1]>a[mid+2]){
  printf("max num is %d",a[mid+1]);
    }
    else unimodal(a,mid+1,right);
    }
    else unimodal(a,left,mid);
    
}
 int main(){
    int a[]={4,5,8,9,10,11,7,3,2,1};
    unimodal(a,0,SIZE_ARRAY);
 }