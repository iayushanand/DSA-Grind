#include <bits/stdc++.h>
using namespace std;

bool check_anagram(string a, string b) {
    if (a.size() != b.size())
        return false;

    unordered_map<char, int> freq;

    for (char c : a)
        freq[c]++;

    for (char c : b)
        freq[c]--;

    for (auto p : freq) {
        if (p.second != 0)
            return false;
    }

    return true;
}

int main() {
    string strs[6];

    for (int i = 0; i < 6; i++) {
        cin >> strs[i];
    }

    vector<vector<string>> groups;
    bool used[6] = {false};

    for (int i = 0; i < 6; i++) {

        if (used[i])
            continue;

        vector<string> group;
        group.push_back(strs[i]);
        used[i] = true;

        for (int j = i + 1; j < 6; j++) {

            if (!used[j] && check_anagram(strs[i], strs[j])) {
                group.push_back(strs[j]);
                used[j] = true;
            }
        }

        groups.push_back(group);
    }


    for (auto group : groups) {
        cout << "[ ";

        for (auto word : group) {
            cout << word << " ";
        }

        cout << "]\n";
    }

    return 0;
}