#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums;
    int n = 5;
    int x;
    for (int i = 0; i < n; i ++){
        cin >> x;
        nums.push_back(x);
    }


    // sol 
    vector<int> product_arr;
    int prod = 1;
    for (int i = 0; i < n; i++ ){
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            prod *= nums[j];
        }
        product_arr.push_back(prod);
        prod = 1;
    }

    // output

    for (int i = 0; i < n; i ++){
        cout << product_arr[i] << " ";
    }


    return 0;
}
