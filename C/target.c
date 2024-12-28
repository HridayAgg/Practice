#include<stdio.h>
char target[30];
char source[]="hriday";
char mystrcpy(char target[],char source[]){
    int i=0;
    while( source[i]!= '\0'){
       target[i]=source[i];
        i++;
    }
}
int main(){
    mystrcpy(target,source);
    printf("%s", target);
    return 0;
}