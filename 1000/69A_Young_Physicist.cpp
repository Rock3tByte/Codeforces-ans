#include <iostream>

int main() {
    int n, x = 0, y = 0, z = 0;
    std::cin >> n;
    int a = 0, b = 0, c = 0;

    for (int i = 0; i < n; i ++) {
        std::cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }

    if ( x == 0 && y == 0 && z == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}