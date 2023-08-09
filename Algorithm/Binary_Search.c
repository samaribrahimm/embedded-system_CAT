#include <stdio.h>
#define SIZE_ARRAY 10
int Binary_search_iteration(int arr[], int left, int right, int num);
int Binary_search_recursion(int arr[], int left, int right, int num);
int main()
{
    int arr[SIZE_ARRAY] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int num;
    printf("enter num that want to search  ");
    scanf("%d", &num);
    int x = 0;

    x = Binary_search_recursion(arr, 0, SIZE_ARRAY - 1, num);
    // x= Binary_search_iteration( arr,0,SIZE_ARRAY-1 , num);
    if (x == -1)
    {
        printf("%d  is not exist", num);
    }
    else
    {
        printf("%d is exist in index %d", num, x);
    }
     return 0;
}
int Binary_search_iteration(int arr[], int left, int right, int num)
{
    int mid;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] > num)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}
int Binary_search_recursion(int arr[], int left, int right, int num)
{
    int mid;
    while (left < right)
    {
        mid = left + (right - left) / 2;
        if (arr[mid] == num)
        {
            return mid;
        }
        else if (arr[mid] > num)
        {
            return Binary_search_recursion(arr, left, mid - 1, num);
        }
        else
        {
            return Binary_search_recursion(arr, mid + 1, right, num);
        }
    }
    return -1;
}