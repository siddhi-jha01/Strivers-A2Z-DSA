#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b)
        cout << a << " is greater" << endl;
    else if (b > a)
        cout << b << " is greater" << endl;
    else
        cout << "Both are equal" << endl;

    return 0;
}

// Time Complexity: O(1)
// Space Complexity: O(1)
