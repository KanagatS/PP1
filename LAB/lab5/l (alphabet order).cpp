#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char order = s[0];
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == order)
        {
            continue;
        }
        if (s[i] > order)
        {
            order = s[i];
        }
        else
        {
            cout << "NO";
            exit(0);
        }
        }
    cout << "YES";
    return 0;
}