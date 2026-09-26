#include <iostream>

int main() {
    long long N, A, B;
    std::cin >> N >> A >> B;

    if (N % 3 == 1) {
        std::cout << A;
    } else if (N % 3 == 2) {
        std::cout << B;
    } else {
        std::cout << (A ^ B);
    }

    return 0;
}