#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }

    int maxFreq = INT_MIN, minFreq = INT_MAX;
    int maxEle = -1, minEle = -1;

    for(auto it : mp) {
        if(it.second > maxFreq) {
            maxFreq = it.second;
            maxEle = it.first;
        }
        if(it.second < minFreq) {
            minFreq = it.second;
            minEle = it.first;
        }
    }

    cout << "Highest frequency element: " << maxEle << endl;
    cout << "Lowest frequency element: " << minEle << endl;

    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
