#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string s = std::to_string(n);

    bool lucky = true;

    if (n % 4 == 0 or n % 7 == 0 or n % 47 == 0 or n % 44 == 0)
    {
        std::cout << "YES";
    }
    else
    {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '4' and s[i] != '7')
            {
                lucky = false;
                break;
            }
        }
        
        if (lucky) {
            std::cout << "YES";
        } else {
            std::cout << "NO";
        }
    }
}