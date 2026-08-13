#include <bits/stdc++.h>
using namespace std;

string encode(vector<string>& strs){
    int s = strs.size();
    string text;

    for (int i = 0; i < s; i++ ){
        text = text + strs[i] + "::;";
    }

    return text;

}

vector<string> decode(string s){
    vector<string> strv;

    size_t start = 0;
    size_t end;

    while ((end = s.find("::;", start)) != string::npos) {
        strv.push_back(s.substr(start, end - start));
        start = end + 3;
    }

    if (start < s.length()) {
        strv.push_back(s.substr(start));
    }

    return strv;
}

int main() {

    vector<string> strs;
    string x;

    for (int i = 0; i < 5 ; i++ ){
        cin >> x;
        strs.push_back(x);
    }

    // solution
    string text = encode(strs);

    cout << text << endl ;

    vector<string> returned = decode(text);

    int n = returned.size();

    for (int i = 0; i < n; i++){
        cout << returned[i] << " ";
    }
    
    return 0;
}
