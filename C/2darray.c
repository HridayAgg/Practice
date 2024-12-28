#include<stdio.h>
int i;
int k;
int main(){
    int n1=0,n2=0,n3=0;
    int table[10][3];
    scanf("%d %d %d", &n1,&n2,&n3);
    int multi[3]={n1,n2,n3};
    for (i=0;i<3;i++){
        for(int j=1;j<=10;j++){ 
        printf("%d X %d = %d\n",multi[i],j,multi[i]*j);}
     printf("\n");
    }
    return 0;
}   