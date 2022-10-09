#include <bits/stdc++.h>
using namespace std;

int maxOf(string s, int i, char ans)
{
    if (i == s.size())
        return ans;
    ans = max(ans, s[i]);
    return maxOf(s, i + 1, ans);
}

int main()
{
    string s;
    cin >> s;
    cout << (char)maxOf(s, 0, '0');
    return 0;
}