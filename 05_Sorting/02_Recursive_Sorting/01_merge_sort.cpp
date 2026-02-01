#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int l, int m, int r){
    vector<int> temp;
    int left = l, right = m + 1;

    while(left <= m && right <= r){
        if(arr[left] <= arr[right])
            temp.push_back(arr[left++]);
        else
            temp.push_back(arr[right++]);
    }

    while(left <= m) temp.push_back(arr[left++]);
    while(right <= r) temp.push_back(arr[right++]);

    for(int i = l; i <= r; i++)
        arr[i] = temp[i - l];
}

void mergeSort(vector<int> &arr, int l, int r){
    if(l >= r) return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &x : arr) cin >> x;

    mergeSort(arr, 0, n - 1);

    for(int x : arr) cout << x << " ";
    return 0;
}

// Time Complexity: O(n log n)
// Space Complexity: O(n)
