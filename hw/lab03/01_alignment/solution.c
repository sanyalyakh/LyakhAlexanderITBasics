#include <stdio.h>

int main(void) {
    unsigned long long addr, align;
    if (scanf("%llu %llu", &addr, &align) != 2 || align == 0) return 0;

    unsigned long long remainder = addr % align;
    unsigned long long down = addr - remainder;
    unsigned long long up = remainder == 0 ? addr : down + align;

    printf("Aligned: %s\nDown: %llu\nUp: %llu\n",
           remainder == 0 ? "yes" : "no", down, up);
    return 0;
}
