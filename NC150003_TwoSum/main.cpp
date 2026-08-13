#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[6];
    int target;

    for (int i = 0; i < size(arr); i++) {
        cin >> arr[i];
    }

    cin >> target;

    unordered_map<int, int> seen;

    for (int i = 0; i < size(arr); i++) {
        int comp = target - arr[i];

        if (seen.count(comp)) {
            cout << "[" << seen[comp] << ", " << i << "]";
            return 0;
        }

        seen[arr[i]] = i;
    }

    return 0;
}