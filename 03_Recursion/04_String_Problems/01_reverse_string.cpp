#include <bits/stdc++.h>
using namespace std;

void reverseString(int l, int r, string &s){
    if(l >= r) return;
    swap(s[l], s[r]);
    reverseString(l + 1, r - 1, s);
}

int main(){
    string s;
    cin >> s;
    reverseString(0, s.size() - 1, s);
    cout << s;
    return 0;
}

// TC: O(n), SC: O(n)
