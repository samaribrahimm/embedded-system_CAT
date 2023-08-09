#include<stdio.h>
#define SIZE_ARRAY 100
void Delete_element(int arr[],int pos,int n);
void Print_array(int arr[], int length);
int n,p;
int main(){
    int n,p;
int arr[SIZE_ARRAY];
printf("enter size of array =");
scanf("%d",&n);
 printf("enter array element :");
 for(int i=0;i<n;i++){
   
    scanf("%d",&arr[i]);
   
}
printf("enter position to delete ");
scanf("%d",&p);
if(p<=n){
Delete_element( arr,p,n);
Print_array(arr,n);
}
else{
    printf("  error!!! the position is invalid  ");
}

}



void Delete_element(int arr[],int pos,int n){
   
for(int i=pos;i<n;i++){
     arr[i]=arr[i+1];
    
    }
    }
   
    


void Print_array(int arr[], int length)
{
    printf("Array element  ");
    for (int i = 0; i < length-1; i++)
    {
        printf("%d \t", arr[i]);
    }
    printf("\n");
}