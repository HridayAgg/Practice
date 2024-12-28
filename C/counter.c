#include<stdio.h>
#include<string.h>
int count;
int main(){
    char str[]="Hridayyy";
    for (int i=0;i<strlen(str);i++){
        if (str[i]=='y'){
            count++;
        };
    }
    printf("%d",count);
    return 0;
}