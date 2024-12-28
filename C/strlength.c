#include<stdio.h>
char str[]="haebthhry";
char n;

int mystrlength(char str[]){
    int i=0;
    while (str[i]!='\0'){
       i++;
    }
    printf("%d",i);
    
}
int main(){
    mystrlength(str);
    return 0;
}