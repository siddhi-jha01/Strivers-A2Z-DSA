#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n - 1; i++){
        int minIdx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }

    for(int x : arr) cout << x << " ";
    return 0;
}

// Time Complexity: O(n^2)
// Space Complexity: O(1)
