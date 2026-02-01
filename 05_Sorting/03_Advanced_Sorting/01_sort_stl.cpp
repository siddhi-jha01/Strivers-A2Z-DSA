#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4, 1, 7, 2};

    sort(arr.begin(), arr.end());

    for(int x : arr) cout << x << " ";
    cout << endl;

    // Custom comparator (descending)
    sort(arr.begin(), arr.end(), greater<int>());

    for(int x : arr) cout << x << " ";
    return 0;
}

// Time Complexity: O(n log n)
// Space Complexity: O(1)
