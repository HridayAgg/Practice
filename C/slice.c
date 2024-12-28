#include<stdio.h>
char str[]="hriday";
char slice(char str[],int m,int n){
    char* ptr1=&str[m];
    char* ptr2=&str[n];
    str = ptr1;
    str[n]='\0';
    printf("%s\n", str);
    }
    
    
int main(){
    slice(str, 1,6);
    return 0;
}