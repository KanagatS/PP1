#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    string s; cin >> s;
    int n; cin >> n;
    int cnt = 0;

    for (int i = 0; i < s.size() - 1; i+=2) {
        for (int j = 1; j < s.size(); j+=2) {
            if (isdigit(s[i]) && isdigit(s[j])) {
                cnt++;
                break;
            }
        }
    }

    if (cnt == 0) {
        cout << "Valid";
        return 0;
    }
    cout << cnt << '\n';
    cout << ((cnt >= n) ? "Valid" : "Not valid");

    return 0;
}