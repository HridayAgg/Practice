#include<stdio.h>

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = a;
    printf("%d",*(ptr+1));
    return 0;
}