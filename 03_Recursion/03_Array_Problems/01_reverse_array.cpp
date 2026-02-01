#include <bits/stdc++.h>
using namespace std;

void reverseArr(int l, int r, vector<int> &arr){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    reverseArr(l + 1, r - 1, arr);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &x : arr) cin >> x;

    reverseArr(0, n - 1, arr);

    for(int x : arr) cout << x << " ";
    return 0;
}

// TC: O(n), SC: O(n)
