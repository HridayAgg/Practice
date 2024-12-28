#include<stdio.h>

int main(){
    float inc,tax;
    scanf("%d", &inc);
    if (500000>inc&& inc>250000){
        tax = inc*5/100;}
    else if(1000000>inc&& inc>500000){
        tax = inc*20/100;
    }
    else if (inc>1000000){ 
        tax = inc*30/100;
            }
    else{
        printf("Congrats you are so broke you didnt pay");
    }
    printf("You have paid %.2f as taxes ", tax);
    
    return 0;
}