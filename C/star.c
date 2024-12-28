#include<stdio.h>
int star(int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<2*i+1;j++){
        printf ("*");
        }
        printf("\n");
    }
}
int main(){{
    printf("%s",star(3));
}    
    return 0;
}