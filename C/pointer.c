#include<stdio.h>
int f(int* p){
    printf("Address,%u",p);

}
int main(){
    int i = 1;
    int* p=&i;
    printf("%d\n", p);
    f(p);
    return 0;
}   