#include<stdio.h>

int main(){
    int p,c,m;
    scanf("Enter the marks in PCM:%p %c %m ", &p, &c, &m);
    int total = (p+c+m/3)*100;
    if (total>40 && p>30 && c>30 && m>30){
        printf("Passed");}
    else{
        printf("FAILED");}
    return 0;
}