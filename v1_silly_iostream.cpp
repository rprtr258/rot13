#include <iostream>

int main() {
    while (true) {
        char c;
        std::cin.get(c);
        if (std::cin.eof())
            break;
        if ('a' <= c && c <= 'z')
            std::cout << char((c - 'a' + 13) % 26 + 'a');
        else if ('A' <= c && c <= 'Z')
            std::cout << char((c - 'A' + 13) % 26 + 'A');
        else
            std::cout << c;
    }
}
