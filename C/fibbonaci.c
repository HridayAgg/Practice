#include<stdio.h>
int i=0;
int sum=0;
int fib(int n);
int fib(int n){
    if (n==1 || n==2){
        return (n-1);
    }
    else{
        return fib(n-1)+fib(n-2);}

}

int main(){
    int ans = fib(10);
    printf("%d", ans);
    return 0;
}