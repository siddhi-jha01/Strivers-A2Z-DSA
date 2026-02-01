#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int l, int r, string &s){
    if(l >= r) return true;
    if(s[l] != s[r]) return false;
    return isPalindrome(l + 1, r - 1, s);
}

int main(){
    string s;
    cin >> s;
    cout << (isPalindrome(0, s.size() - 1, s) ? "YES" : "NO");
    return 0;
}

// TC: O(n), SC: O(n)
