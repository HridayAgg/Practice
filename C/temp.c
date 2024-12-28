#include<stdio.h>
float c2f(float c);
float c2f(float c){
    return (9.0/5.0)*c+32;
}
int main(){
    float ans=c2f(25);
    printf("%.2f", ans);
    return 0;
}