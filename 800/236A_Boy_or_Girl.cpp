#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    set<char> unique(s.begin(), s.end());

    cout << (unique.size() % 2 == 0
        ? "CHAT WITH HER!"
        : "IGNORE HIM!");

    return 0;
}