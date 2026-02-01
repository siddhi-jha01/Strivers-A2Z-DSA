#include <bits/stdc++.h>
using namespace std;

void printNto1(int n){
    if(n == 0) return;
    cout << n << " ";
    printNto1(n - 1);
}

int main() {
    int n;
    cin >> n;
    printNto1(n);
    cout << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
