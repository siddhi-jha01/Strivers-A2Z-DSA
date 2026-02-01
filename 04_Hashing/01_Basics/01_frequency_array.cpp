#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    // Hash array (assuming values <= 100)
    vector<int> hash(101, 0);

    for(int x : arr)
        hash[x]++;

    int q;
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }

    return 0;
}

// Time Complexity: O(n + q)
// Space Complexity: O(max_value)
