#include <stdio.h>

int main() {
    char buf[1024];
    while (1) {
        fgets(buf, sizeof(buf), stdin);
        if (feof(stdin) == EOF)
            break;
        for (char *p = buf; *p != 0; p++) {
            char c = *p;
            if ('a' <= c && c <= 'z')
                putchar((c - 'a' + 13) % 26 + 'a');
            else if ('A' <= c && c <= 'Z')
                putchar((c - 'A' + 13) % 26 + 'A');
            else
                putchar(c);
        }
    }
}
