#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Pattern 1 - Right triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
            cout << "*";
        cout << endl;
    }

    // Pattern 2 - Number triangle
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
