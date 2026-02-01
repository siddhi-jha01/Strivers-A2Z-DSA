#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rev = 0, temp = n;
    while(temp > 0){
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    if(rev == n)
        cout << n << " is a palindrome" << endl;
    else
        cout << n << " is not a palindrome" << endl;

    return 0;
}

// Time Complexity: O(log10(n))
// Space Complexity: O(1)
