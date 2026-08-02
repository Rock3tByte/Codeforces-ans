#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> arr;

    cin.ignore();

    if (n >= 1 && n <= 100) {
        for (int i = 0; i < n; i++) {
            string line;
            getline(cin, line);

            arr.push_back(line);
        }


        for (int j = 0; j < arr.size(); j++) {
            string a = "";
            if (arr[j].size() > 10 ) {
                a += arr[j][0];
                a += to_string(arr[j].size() - 2);
                a += arr[j][arr[j].size() - 1];
            } else {
                a = arr[j];
            }
            cout << a << "\n";
        }
    } else {
        return 0;
    }

    return 0;
}