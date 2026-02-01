#include <bits/stdc++.h>
using namespace std;

void sumN(int i, int sum){
    if(i < 1){
        cout << sum << endl;
        return;
    }
    sumN(i - 1, sum + i);
}

int main(){
    int n;
    cin >> n;
    sumN(n, 0);
    return 0;
}

// TC: O(n), SC: O(n)
