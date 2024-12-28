#include<stdio.h>
float avg(int a,int b,int c){
    return (a+b+c)/3.0;
}

int main(){ 
    int a = avg(1,2,3);
    printf("%d",a);
    return 0;
}