#include<stdio.h>
int i=0;
int main(){
    FILE* fptr;
    fptr=fopen("integer.txt","r");
    fscanf(fptr,"%d",&i);
    fptr=fopen("integer.txt","w");
    fprintf(fptr,"%d",2*i);
    fclose(fptr);
    return 0;
}