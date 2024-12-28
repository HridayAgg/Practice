#include<stdio.h>
int summ=0;
int sum(int n);
int sum(int n){
    for (int i=0;i<=n;i++){
         summ+=i;
    }
    return(summ);
}
int main(){ 
    printf("%d",sum(11));
    return 0;
}