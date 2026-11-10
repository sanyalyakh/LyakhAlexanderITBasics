#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

int main(int argc, char **argv) {
    long long min = 0, max = 0;
    int found = 0;

    for (int i = 1; i < argc; ++i) {
        const char *s = argv[i];
        const char *p = s;
        if (*p == '+' || *p == '-') ++p;
        int valid = *p != '\0';
        while (*p && valid) {
            if (!isdigit((unsigned char)*p)) valid = 0;
            ++p;
        }

        errno = 0;
        char *end;
        long long value = strtoll(s, &end, 10);
        if (!valid || errno == ERANGE || *end != '\0') {
            fprintf(stderr, "Warning: skipping invalid argument \"%s\"\n", s);
            continue;
        }

        if (!found || value < min) min = value;
        if (!found || value > max) max = value;
        found = 1;
    }

    if (found) {
        printf("Max: %lld\nMin: %lld\n", max, min);
    } else {
        printf("Usage: %s <integer> [integer ...]\n", argv[0]);
    }
    return 0;
}
