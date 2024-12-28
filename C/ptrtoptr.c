#include<stdio.h>

int main(){
    int i=1;
    int* ptr1 = &i;
    int** ptr2 = &ptr1;
    printf("%d\n", i);
    printf("%d\n", *ptr1);
    printf("%d", **ptr2);

    return 0;
}