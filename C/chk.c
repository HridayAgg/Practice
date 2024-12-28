#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int count;
int main(){
    bool yes=false;
    char str[]="Hridayyy";
    for (int i=0;i<strlen(str);i++){
        if (str[i]=='y'){
            yes=true;
        };
    }
    if (yes){
        printf("yes");
    }
    else{
        printf("No");
    }
    return 0;
}