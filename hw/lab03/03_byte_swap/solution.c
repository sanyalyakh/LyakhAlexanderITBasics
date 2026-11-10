#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void) {
    uint32_t x;
    if (scanf("%" SCNu32, &x) != 1) return 0;

    uint32_t reversed = ((x & UINT32_C(0x000000FF)) << 24)
                      | ((x & UINT32_C(0x0000FF00)) << 8)
                      | ((x & UINT32_C(0x00FF0000)) >> 8)
                      | ((x & UINT32_C(0xFF000000)) >> 24);

    printf("Decimal: %" PRIu32 "\nHex: 0x%08" PRIX32 "\n", reversed, reversed);
    return 0;
}
