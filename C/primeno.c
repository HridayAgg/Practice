#include<stdio.h>

int main(){
    int i=2,prime=1;
    int n=19;
    do
    {
        if(n%i==0){
        prime=0;
        }
        i++;
    } while (i<n);
    {    
    }
    if(prime){
        printf("Prime number");
    }
    else{
    printf("Not");
    }
    
    return 0;
}