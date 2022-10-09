#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int sm(string s) {
    int sm = 0;

    for (int i = 0; i < s.size(); i++) {
        sm += s[i] - 48;
    }

    return sm;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    string s; cin >> s;

    cout << sm(s);
      
    return 0;
}