#include <iostream>

int main() {
    int x;
    std::cin >> x;

    int power = 1, y = 0;

    while (power <= x/2) {
        power *= 2;
        y++;
    }

    int a = x - power;

    while (power <= a / 2)
    {
        power *= 2;
        y++;
    }

    std::cout << power << y;
}