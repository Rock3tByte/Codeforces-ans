#include <iostream>

int main() {
    std::string a;
    std::cin >> a;

    int G = 0;
    
    for (int i = 0; i < a.length(); i++) {
        if (i > 0 && a[i] == a[i-1]) {
            G++;

            if (G == 7) {
                break;
            }
        } else {
            G = 1;
        }
    }

    if (G >= 7) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}