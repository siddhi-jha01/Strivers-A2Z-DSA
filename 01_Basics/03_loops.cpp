#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // For loop
    for(int i=1; i<=n; i++)
        cout << i << " ";
    cout << endl;

    // While loop - sum of 1..n
    int sum = 0, i=1;
    while(i <= n) {
        sum += i;
        i++;
    }
    cout << "Sum = " << sum << endl;

    // Do-while loop - print numbers from n down to 1
    int j = n;
    do {
        cout << j << " ";
        j--;
    } while(j > 0);
    cout << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
