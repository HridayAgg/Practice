#include<stdio.h>
int n;
int main(){
    char str[]="Pasm";
    for (int i = 0; i <strlen(str); i++)
    {
        str[i] = str[i]+1;
    }
    
    printf("%s",str);
    return 0;
}