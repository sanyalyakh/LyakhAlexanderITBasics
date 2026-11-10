#include <stdio.h>

int main(void) {
    unsigned long long chars = 0, words = 0, lines = 0;
    int in_word = 0;
    int c;
    while ((c = getchar()) != EOF) {
        ++chars;
        if (c == '\n') ++lines;
        if (c == ' ' || c == '\t' || c == '\n') {
            in_word = 0;
        } else if (!in_word) {
            ++words;
            in_word = 1;
        }
    }
    printf("Chars: %llu\nWords: %llu\nLines: %llu\n", chars, words, lines);
    return 0;
}
