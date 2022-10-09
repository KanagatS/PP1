#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char ans = s[0];
    for (int i = 0; i < s.size(); i++)
    {
        ans = max(ans, s[i]);
    }
    cout << ans;
    return 0;
}