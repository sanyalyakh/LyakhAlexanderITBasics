#include "my_strcmp.h"

int my_strcmp(const char *a, const char *b) {
    while (*a && (unsigned char)*a == (unsigned char)*b) {
        ++a;
        ++b;
    }
    return (int)(unsigned char)*a - (int)(unsigned char)*b;
}
