#include <bits/stdc++.h>
using namespace std;

char boss(string s, int i, char ans)
{
    if (i == s.size())
        return ans;

    if (s[i] >= 'A' && s[i] <= 'Z')
    {
        ans = s[i];
        return ans;
    }
    return boss(s, i + 1, ans);
}

int main()
{
    string s;
    cin >> s;

    if ((char)boss(s, 0, 0) >= 'A' && (char)boss(s, 0, 0) <= 'Z')
        cout << (char)boss(s, 0, 0);
    else
        cout << "-1";
    return 0;
}