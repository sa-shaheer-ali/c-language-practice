#include <stdio.h>

int main() {
    int n, i;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n) {
        printf("%d ", i);
        i++;
    }

    return 0;
}
