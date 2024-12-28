#include<stdio.h>
int sumavg(int* ptr1,int* ptr2){
    printf("Sum-%d\n",*ptr1+*ptr2);
    printf("Avg-%d",(*ptr1+*ptr2)/2);
}
int main(){
    int num1 = 10; 
    int num2 = 12; 
    sumavg(&num1,&num2);
}