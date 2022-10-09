#include <bits/stdc++.h>
using namespace std;

void func(string s, string t, int cnt){
    while (s != t){
        rotate(s.begin(), s.begin() + 1, s.end());
        cnt++;
    }
    cout << s.size() - cnt;
}

string sorted(string s){
    sort(s.begin(), s.end());
    return s;
}

int main(){
    string s, t;
    cin >> s >> t;
    if (s == t) cout << 0;
    else if (sorted(s) != sorted(t)) cout << "-1";
    else func(s, t, 0);
    return 0;
}

