#include <stdio.h>
#define SIZE_ARRAY 10
// prototype of fun
void BUbblesort(int arr[], int length);
void Swap(int *p1, int *p2);
void Print_array(int arr[], int length);

int main()
{
    int arr[SIZE_ARRAY] = {8, 5, 11, 4, 12, 12, 35, 1, 32, 2};
    // int length =sizeof(arr)/arr[0];
    printf("before sort  ");
    Print_array(arr, SIZE_ARRAY);
    BUbblesort(arr, SIZE_ARRAY);
    printf("after sort   ");
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
void BUbblesort(int arr[], int length)
{
    int flag=0;
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = 0; j < length - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                Swap(&arr[j], &arr[j + 1]);
                flag =1;
            }
        }
        
        if(flag == 0){
            return;
        }
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