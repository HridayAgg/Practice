#include<stdio.h>

int main(){
    
    FILE* fptr;
    int num;
    fptr=fopen("multiplication.txt","w");
    scanf("%d",&num);
    for (int i=1;i<=10;i++){
    fprintf(fptr,"%d X %d = %d\n",num,i,num*i);
    }
    fclose(fptr);
    return 0;
}