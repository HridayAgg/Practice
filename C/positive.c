#include<stdio.h>
int count=0;
int positivecount(int arr[], int n){
    for(int i=0;i<n;i++){
    if (arr[i]>0){
        count++;
        
    }
    
    }
    printf("%d",count);
}
int main(){
    int arr[7]={1,2,3,4,2,-5};
    positivecount(arr, 7);
    return 0;
}