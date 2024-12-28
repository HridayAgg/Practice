#include<stdio.h>

int main(){
    char a;
    scanf("%c", &a);
    if (a>=97 && a<=122){
        printf("lowercase");
    }
    else{
        printf("Not lowercase");
    }
    return 0;
}