#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // sol

    vector<int> prod(n, 1);

    int left = 1;

    for (int i = 0; i < n; i++) {
        prod[i] = left;
        left *= nums[i];
    }

    int right = 1;

    for (int i = n - 1; i >= 0; i--) {
        prod[i] *= right;
        right *= nums[i];
    }

    for (int x : prod) {
        cout << x << " ";
    }

    return 0;
}