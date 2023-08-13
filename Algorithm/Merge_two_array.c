#include <stdio.h>
#define SIZE_ARRAY1 5
#define SIZE_ARRAY2 4
#define SIZE_ARRAY  SIZE_ARRAY1+SIZE_ARRAY2
void mergetwoarray(int arr1[],int arr2[]);
void Merge_Sort(int arr[], int left, int right);
void Print_array(int arr[], int length);
void Merge(int arr[], int left, int right);
 int arr[SIZE_ARRAY];
int main()
{
    int arr1[SIZE_ARRAY1] = {1, 4, 6, 9, 15};
    int arr2[SIZE_ARRAY2] ={2,5,8,10}; 
   printf("Input first array   ");
   Print_array(arr1, SIZE_ARRAY1);
    printf("Input Second array  ");
   Print_array(arr2, SIZE_ARRAY2);
   
    mergetwoarray(arr1,arr2);
    Merge_Sort(arr, 0, SIZE_ARRAY - 1);
      printf("array after sort    ");
    Print_array(arr, SIZE_ARRAY);
    return 0;
}
void mergetwoarray(int arr1[],int arr2[]){
    
for( int i=0;i<=SIZE_ARRAY1;i++){
    arr[i]=arr1[i];
}
for(int i=0;i<SIZE_ARRAY2;i++){
    arr[i+SIZE_ARRAY1]=arr2[i];
}
}
void Merge(int arr[], int left, int right)
{
    int i = 0, j = 0, k = left;
    int mid = left + (right - left) / 2;
    int S_left = mid - left + 1;
    int S_right = right - mid;
    int Larr[S_left];
    int Rarr[S_right];
    for (int i = 0; i < S_left; i++)
    {
        Larr[i] = arr[left + i];
    }
    for (int i = 0; i < S_right; i++)
    {
        Rarr[i] = arr[mid + 1 + i];
    }
    while (i < S_left && j < S_right)
    {
        if (Larr[i] < Rarr[j])
        {
            arr[k++] = Larr[i++];
           
        }
        else
        {
            arr[k++] = Rarr[j++];
        
        }
    }
    while (i < S_left)
    {
        arr[k++] = Larr[i++];
    }
    while (j < S_right)
    {
        arr[k++] = Rarr[j++];
    }
}
void Merge_Sort(int arr[], int left, int right)
{
    int mid;
    mid = left + (right - left) / 2;
    if (left < right)
    {

        Merge_Sort(arr, left, mid);
        Merge_Sort(arr, mid + 1, right);
        Merge(arr, left, right);
        
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