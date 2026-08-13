#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(10);
    int size = nums.size();
    for (int i = 0; i < size; i++){
        cin >> nums[i];
    }

    bool flag = 0;
    // brute force logic
    // for(int i = 0; i < size; i ++){
    //     for (int j = i+1; j < size; j++){
    //         if (nums[i] == nums[j]) {
    //             flag = 1;
    //         }
    //     }
    // }

    // optimising
    set<int> n;
    for (int i = 0; i < size; i++){
        if(n.find(nums[i]) != n.end()){
            flag=1;
            break;
        }
        else{
            n.insert(nums[i]);
        }
    }

    

    cout<<flag;
    return 0;
}
