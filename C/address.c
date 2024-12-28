#include<stdio.h>

int main(){
    int a = 12;
    int* ptr = &a;
    printf("%u\n", ptr);
    printf("%u", *ptr);
    return 0;
}