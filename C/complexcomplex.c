#include<stdio.h>
typedef struct complexno
{   
    int a;
    int b;
}Complex;

int main(){
    Complex c1,c2,c3,c4,c5;
    Complex C[5]={c1,c2,c3,c4,c5};
    for(int i=0;i<5;i++){
    printf("%d->Enter the real part:",i+1);
    scanf("%d",&C[i].a);
    printf("%d->Enter the imaginary part:",i+1);
    scanf("%d",&C[i].b);}
    for (int j=0;j<5;j++){
        printf("%d+%di\n",C[j].a,C[j].b);
    }
    return 0;
}