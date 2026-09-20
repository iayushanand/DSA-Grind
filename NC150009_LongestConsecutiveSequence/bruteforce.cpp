#include <bits/stdc++.h>
using namespace std;

int main() {
    // inp
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // sol
    set <int> s;

    for (int i = 0; i < n; i ++){
        s.insert(nums[i]);
    }

    int longest = 0;
    // for (int i = 0; i < n; i++){
        
    // }

    for (int element: s){
        auto it = s.find(element+1);
        int length = 1;
        if (it != s.end()){
            while (s.find(element+length) != s.end()){
                length++;
            }
            longest=max(length, longest);
        }
    }

    cout << longest;


    return 0;
}
