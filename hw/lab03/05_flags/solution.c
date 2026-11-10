#include <stdio.h>
#include <stdint.h>

int main(void) {
    uint8_t flags = 0;
    int command, bit;
    while (scanf("%d", &command) == 1) {
        if (command == 0) break;
        if (command == 4) {
            for (int i = 7; i >= 0; --i)
                putchar((flags & (1u << i)) ? '1' : '0');
            putchar('\n');
        } else if (command >= 1 && command <= 3) {
            if (scanf("%d", &bit) != 1) break;
            if (command == 1) flags |= (uint8_t)(1u << bit);
            if (command == 2) flags &= (uint8_t)~(1u << bit);
            if (command == 3) flags ^= (uint8_t)(1u << bit);
        }
    }
    return 0;
}
