#include<stdio.h>
#define SIZE_ARRAY 10
int partition(int arr[], int left,int right);
int main (){
     int arr[SIZE_ARRAY] = {8, 5, 11, 4, 12, 12, 35, 1, 32, 2};
     int left =0;
     int right =SIZE_ARRAY-1;
   
     printf("array before sort  ");
    Print_array(arr, SIZE_ARRAY);
  // int povit_index=partition(arr,left,right);
   Quick_Sort(arr,left,right);
   
      printf("array after sort   ");
    Print_array(arr, SIZE_ARRAY);
    return 0;

   
}


void Swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


int partition(int arr[], int left,int right){
   int povit_value=arr[right];
   for(int j=left;j<right;j++){
    if(arr[j]<=povit_value){
        Swap(&arr[left],&arr[j]);
        left++;
    }
   }
   Swap(&arr[left],&arr[right]);
   return left;





}
void Quick_Sort(int arr[], int left,int right){
    if(left<right){
 int povit_index=partition(arr,left,right);
    Quick_Sort( arr,  left,povit_index-1);
    Quick_Sort( arr,povit_index+1,right);
    }
    
}
void Print_array(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}