#include <stdio.h>

int main() {
    while (1) {
        char c = getchar();
        if (c == EOF)
            break;
        if ('a' <= c && c <= 'z')
            putchar((c - 'a' + 13) % 26 + 'a');
        else if ('A' <= c && c <= 'Z')
            putchar((c - 'A' + 13) % 26 + 'A');
        else
            putchar(c);
    }
}
