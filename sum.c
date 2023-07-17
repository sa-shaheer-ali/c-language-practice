#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("The sum of all natural numbers between 1 and %d is %d.", n, sum);

    return 0;
}
