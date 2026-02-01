#include <bits/stdc++.h>
using namespace std;

// Function to calculate GCD using Euclidean algorithm
int gcd(int a, int b){
    if(b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " = " << gcd(a, b) << endl;

    return 0;
}

// Time Complexity: O(log(min(a,b)))
// Space Complexity: O(log(min(a,b))) due to recursion
