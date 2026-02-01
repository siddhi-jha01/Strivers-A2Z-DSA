#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> orderedMap;
    unordered_map<int, int> unorderedMap;

    orderedMap[3]++;
    orderedMap[1]++;
    orderedMap[2]++;

    unorderedMap[3]++;
    unorderedMap[1]++;
    unorderedMap[2]++;

    cout << "map output:\n";
    for(auto it : orderedMap)
        cout << it.first << " " << it.second << endl;

    cout << "unordered_map output:\n";
    for(auto it : unorderedMap)
        cout << it.first << " " << it.second << endl;

    return 0;
}

// map → O(log n)
// unordered_map → O(1) average
