#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> hash(26, 0);

    for(char c : s)
        hash[c - 'a']++;

    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;
        cout << hash[ch - 'a'] << endl;
    }

    return 0;
}

// Time Complexity: O(n + q)
// Space Complexity: O(26)
