#include<stdio.h>

int main(){
    FILE *fptr;
    int num1,num2,num3;
    fptr = fopen("int.txt","r");
    fscanf(fptr,"%d %d %d",&num1,&num2,&num3);
    printf("%d %d %d",num1,num2,num3);
    fclose(fptr);
    return 0;
}