#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *ptr = (int *)calloc(6, sizeof(float));
    for (n = 0; n < 6; n++)
    {
        scanf("%d", &ptr[n]);
        fflush(stdin);
    }
    ptr = realloc(ptr,10*sizeof(int));

    for (n = 0; n < 6; n++){
    printf("%d,", ptr[n]);}
    return 0;
}