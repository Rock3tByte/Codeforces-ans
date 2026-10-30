#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> arr;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;
        for (int j = 0; j < arr.size(); i++) {
            if (arr[j] == str) {
                cout << str << "1";
                continue;
            }
        }
        arr.push_back(str);
        cout << "OK";
    }

    return 0;
}