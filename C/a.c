#include<stdio.h>
#include<string.h>

char sliced[100];  // Initialize a large enough array to hold the sliced string
char str[] = "hriday";

void slice(char str[]) {
    int m, n;
    printf("Enter start index: ");
    scanf("%d", &m);
    printf("Enter end index: ");
    scanf("%d", &n);

    int i;
    for (i = 0; m <= n && str[m] != '\0'; i++, m++) {
        sliced[i] = str[m];
    }
    sliced[i] = '\0';  // Null-terminate the sliced string

    printf("Sliced string: %s\n", sliced);
}

int main() {
    slice(str);
    return 0;
}
