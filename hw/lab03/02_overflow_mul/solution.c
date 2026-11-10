#include <stdio.h>
#include <limits.h>

int main(void) {
    int a, b;
    if (scanf("%d %d", &a, &b) != 2) return 0;

    long long product = (long long)a * b;
    if (product < INT_MIN || product > INT_MAX) {
        puts("Overflow");
    } else {
        printf("Product: %lld\n", product);
    }
    return 0;
}
