#include<stdio.h>
int n=5 ,i = 0,j=0;

void PrintArray(int arr[], int n){
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}
int rev(int arr[], int n){
    for (i=0;i<n/2;i++){
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    PrintArray(arr, 5);
    rev(arr, 5);
    PrintArray(arr, 5);
    return 0;
}