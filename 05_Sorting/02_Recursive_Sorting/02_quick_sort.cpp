#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low, j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1) i++;
        while(arr[j] > pivot && j >= low + 1) j--;
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(vector<int> &arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int &x : arr) cin >> x;

    quickSort(arr, 0, n - 1);

    for(int x : arr) cout << x << " ";
    return 0;
}

// Time Complexity: O(n log n) average, O(n^2) worst
// Space Complexity: O(log n)
