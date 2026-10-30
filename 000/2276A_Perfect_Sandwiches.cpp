#include <iostream>
#include <string>

int main()
{
    int n;
    std::cin >> n;

    int a, b = 0;

    for (int i = 0; i < n; i++) {
        std::cin >> a >> b;
        if ( a >= 1 && b >= 1 && a > b) {
            if ( a % 2 == 0 && b % 2 == 0) {
                std::cout << b/2;
            } else {
                std::cout << b;
            }
        } else {
            std::cout << -1;
        }
    }

    return 0;
}