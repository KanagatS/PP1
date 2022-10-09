#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    map<string, string> m;

    while (n--)
    {
        string s;
        cin >> s;

        bool ok = false;

        for (auto &i : m)
            if (s == i.second)
            {
                cin >> m[i.first];
                ok = true;
                break;
            }

        if (ok == false)
            cin >> m[s];
    }

    cout << m.size() << endl;

    for (auto &i : m)
        cout << i.first << ' ' << i.second << endl;

    return 0;
}