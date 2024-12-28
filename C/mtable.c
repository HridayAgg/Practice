#include<stdio.h>

int main(){
    int n=10;
    int multi[10];
    for (int i=0;i<n;i++){
        multi[i] = 5*(i+1);
    }
    for (int i;i<n;i++){
        printf("5 X %d = %d\n", i, multi[i]);
    }
    printf("%", multi);
    return 0;
}