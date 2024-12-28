#include<stdio.h>
struct vector
{int i,j;};

struct vector sumVector(struct vector v1,struct vector v2){
    struct vector v3={v1.i+v2.i,v1.j+v2.j};
    printf("%di+%dj",v3->i,v3.j);

}   
int main(){
    struct vector v1={1,2};
    struct vector v2={3,6};
    sumVector(v1,v2);
    return 0;
}