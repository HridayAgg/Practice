#include<stdio.h>
int n=5;
char str[5];
int main(){
    for (int i=0;i<5;i++){
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[5]='\0';
    printf("%s", str);
    return 0;
}