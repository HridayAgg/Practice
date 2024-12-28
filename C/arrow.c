#include<stdio.h>
struct student
{
    int rollno;
    int marks;
};

int main(){
    struct student kris;
    struct student* ptr=&kris;
    ptr->marks=91;
    printf("%d",kris.marks);
    return 0;
    
    }
    
