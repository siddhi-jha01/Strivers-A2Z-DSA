#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int temp = n;
    while(temp > 0){
        count++;
        temp /= 10;
    }

    cout << "Number of digits in " << n << " = " << count << endl;

    return 0;
}

// Time Complexity: O(log10(n))
// Space Complexity: O(1)
