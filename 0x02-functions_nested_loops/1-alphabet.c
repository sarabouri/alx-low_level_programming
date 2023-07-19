#include "main.h"

void _putchar(char c) {
    putchar(c);
}

void print_alphabet(void) {
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++) {
        _putchar(letter);
    }

    _putchar('\n');
}

int main() {
    print_alphabet();
    return 0;
}
