#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> map1, map2;
    int flag = 1;

    if (s.size() != t.size()){
        cout << "false";
        return 0;
    }

    for(int i = 0; i < (int)s.size(); i++){
        ++map1[s[i]];
        ++map2[t[i]];
    }


    for (auto pair: map1){
        if(pair.second != map2[pair.first]){
            flag = 0;
            break;
        }
    }

    cout << flag;

    return 0;
}
