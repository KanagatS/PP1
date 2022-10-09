#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

void stand_up(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (i % 2 == 0) cout << (char)toupper(s[i]);
        else cout << s[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    string s; cin >> s;
     
    stand_up(s);
      
    return 0;
}