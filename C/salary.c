#include<stdio.h>
int salary,salary2;
char name[100],name2[100];
int main(){
    printf("Was yo name dawg?:");
    scanf("%s",&name);
    printf("Salary nigga:");
    scanf("%d",&salary);
    printf("Was yo name dawg?:");
    scanf("%s",&name2);
    printf("Salary nigga:");
    scanf("%d",&salary2);
    FILE* fptr;
    fptr=fopen("Employee.txt","w");
    fprintf(fptr,"%s, %d\n",name,salary);
    fprintf(fptr,"%s,  %d",name2,salary2);
    
    fclose(fptr);

    return 0;
}