#include<stdio.h>

int main(){
    int i=1,product=1;
    int n=8;
    // for(i=1;i<n;i++){
    //     product*=i;
    // }
    while (i<=n)
    {
        product*=i;
        i++;
    }
    printf("%d",product);
    return 0;
}