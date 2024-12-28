#include<stdio.h>

int main(){
    int i = 0;
    int sum=0;
    do{
        i++;
        sum+=i;
    }
    while(i<10);
    printf("%d",sum);
    return 0;
}   