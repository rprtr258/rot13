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
                *p = (c - 'a' + 13) % 26 + 'a';
            else if ('A' <= c && c <= 'Z')
                *p = (c - 'A' + 13) % 26 + 'A';}
        puts(buf);
    }
}
