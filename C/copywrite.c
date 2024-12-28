#include<stdio.h>

int main(){
    FILE* fptr1;
    FILE* fptr2;
    char c;
    fptr1 = fopen("source.txt","r");
    fptr2 = fopen("target.txt","w");
    while(1){
        c=fgetc(fptr1);
        if (c==EOF){
            break;
        }
        else{
            
            fprintf(fptr2,"%c",c);
            fprintf(fptr2,"%c",c);
        }
    }
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}