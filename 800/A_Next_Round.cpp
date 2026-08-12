#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    
    for (int i = 0; i < n; i++) { 
        cin >> v[i];
    }

    int count = 0;
    int threshold = v[k - 1];

    for (int val: v) {
        if (val >= threshold && val > 0) {
            count++;
        } else {
            continue;
        }
    }

    cout << count;

    return 0;
}