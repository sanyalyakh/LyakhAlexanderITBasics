#include <stdio.h>

int main(void) {
    unsigned long long price;
    if (scanf("%llu", &price) != 1) return 0;
    unsigned long long vat = (price + 2) / 5;
    printf("VAT: %llu\nTotal: %llu\n", vat, price + vat);
    return 0;
}
