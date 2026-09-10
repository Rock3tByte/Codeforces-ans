#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int up = 0, low = 0;

    for (char c: s) {
        if (islower(c)) {
            low++;
        } else if (isupper(c)) {
            up++;
        }
    }

    if ( up > low ) {
        for ( char &ch: s) {
            ch = toupper(ch);
        }
    } else {
        for (char &ch : s)
        {
            ch = tolower(ch);
        }
    }

    cout << s << "\n";

    return 0;
}