#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

bool check(string s) {
    int cnt = 0;

    for (int i = 0; i < s.size(); i++) {
        if (int(s[i]) % 2 == 0) cnt++;
    }

    if (cnt == s.size()) return true;
    else return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    string s; cin >> s;

    if (check(s)) cout << "Valid";
    else cout << "Not valid";
      
    return 0;
}