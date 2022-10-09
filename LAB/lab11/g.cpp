#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<string, set<int>> m;

    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        m.emplace(s, x);
    }

    for (auto i : m)
    {
        if (i.second.size() >= 3)
            cout << i.first << " +1\n";
        else
            cout << i.first << " NO BONUS\n";
    }

    return 0;
}