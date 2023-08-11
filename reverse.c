#include <stdio.h>


int main() {
    int n, i;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    i = n;
    while (i >= 1) {
        printf("%d ", i);
        i--;

    }

    return 0;
}

