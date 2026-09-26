#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string s;
    std::cin >> s;

    std::string b = "";

    for (int i = 0; i < s.length(); i++) {
        switch (s[i]){
        case 'A':
        case 'O':
        case 'Y':
        case 'E':
        case 'U':
        case 'I':
        case 'a':
        case 'o':
        case 'y':
        case 'e':
        case 'u':
        case 'i':
            continue;

        default:
            b += ".";
            b += std::tolower(s[i]);
        }
    }

    std::cout << b;

    return 0;
}