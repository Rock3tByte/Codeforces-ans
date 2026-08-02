#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if (!(cin >> n))
        return 0;
    cin.ignore();

    int yes = 0;

    vector<string> teams;

    for (int i = 0; i < n; i ++) {
        string work;
        getline(cin, work);
        teams.push_back(work);
    }

    string str;
    for (string team : teams) {
        vector<int> arr;
        str = team;
        stringstream ss(str);
        int x, sum = 0;
        while (ss >> x) {
            arr.push_back(x);
        }
        for (int num : arr) {
            sum += num;
        }
        if (sum > 1) {
            yes++;
        }
    }

    cout << yes;

    return 0;
}