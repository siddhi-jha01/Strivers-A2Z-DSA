#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0, temp1 = n;
    int no_of_digits = 0, temp2 = n;

    // Count digits
    while(temp1 > 0){
        no_of_digits++;
        temp1 /= 10;
    }

    // Calculate sum of digits^digits
    while(temp2 > 0){
        int digit = temp2 % 10;
        sum += pow(digit, no_of_digits);
        temp2 /= 10;
    }

    if(sum == n)
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;

    return 0;
}

// Time Complexity: O(log10(n))
// Space Complexity: O(1)
