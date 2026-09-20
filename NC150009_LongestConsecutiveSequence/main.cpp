#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    int longest = 0;
    // for (int i = 0; i < n; i++) {
    
    // }

    for (int x : s) {
        if (s.find(x - 1) == s.end()) {
            int length = 1;

            while (s.find(x + length) != s.end()) {
                length++;
            }

            longest = max(longest, length);
        }
    }

    cout << longest;

    return 0;
}