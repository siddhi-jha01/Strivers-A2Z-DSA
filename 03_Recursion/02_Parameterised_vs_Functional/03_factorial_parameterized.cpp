#include <bits/stdc++.h>
using namespace std;

void fact(int n, int ans){
    if(n == 1){
        cout << ans << endl;
        return;
    }
    fact(n - 1, ans * n);
}

int main(){
    int n;
    cin >> n;
    fact(n, 1);
    return 0;
}

// TC: O(n), SC: O(n)
