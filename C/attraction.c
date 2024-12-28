#include<stdio.h>
int g=9.8;
int force(int m);
int force(int m){
    return m*g;
}
int main(){
    int f = force(5);
    printf("%d", f);
    return 0;
}   