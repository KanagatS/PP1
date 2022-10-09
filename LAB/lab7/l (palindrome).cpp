#include <bits/stdc++.h>
using namespace std;

string result(string s, int i, int k)
{
    if (i > k)
        return "Yes";
    if (s[i] != s[k])
        return "No";
    return result(s, i + 1, k - 1);
}

int main()
{
    string s;
    cin >> s;
    cout << result(s, 0, s.size() - 1);
    return 0;
}