#include<stdio.h>
int func(int* ptr){   
    printf ("%d",*ptr*10);
}
int main(){
    int a = 19;
    int* ptr =&a;
    func(&a);

    return 0;
}