#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int digits(string s) {
    int cnt = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isdigit(s[i])) cnt++;
    }

    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    string s; cin >> s;
    int n; cin >> n;

    if (digits(s) >= n) cout << "YES";
    else cout << "NO";
      
    return 0;
}