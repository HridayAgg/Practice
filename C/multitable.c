#include<stdio.h>

int main(){
    int* arr=(int*) malloc(10*sizeof(int));
    for (int j=0;j<10;j++){
    arr[j]=7*(1+j);
    printf("%d X %d = %d\n",7,j+1,arr[j]);}
    printf("\n");
    arr=realloc(arr,15*sizeof(int));
    for (int j=0;j<15;j++){
    arr[j]=7*(1+j);
    printf("%d X %d = %d\n",7,j+1,arr[j]);}
    return 0;
}