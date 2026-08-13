#include <bits/stdc++.h>
using namespace std;

int main() {

    // inp

    vector<int> nums;
    int  k, x;
    for (int i = 0; i < 15; i++){
        cin >> x;
        nums.push_back(x);
    }
    cin >> k;


    // sol

    vector<int> sol;
    map<int, int> m;
    int n = nums.size();

    for (int i = 0; i < n; i++){
        ++m[nums[i]];
    }
    
    vector<pair<int, int>> freq(m.begin(), m.end());

    sort(freq.begin(), freq.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });

    for (int i = 0; i < k; i++) {
        cout << freq[i].first << " ";
        sol.push_back(freq[i].first);
    }


    return 0;
}
