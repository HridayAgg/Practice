#include<stdio.h>
typedef struct complexno
{   
    int a;
    int b;
}Complex;

int main(){
    Complex c1;
    c1.a=3;
    c1.b=2;
    printf("%d+%di",c1.a,c1.b);
    return 0;
}