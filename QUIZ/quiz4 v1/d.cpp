#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i <= s1.size() - s2.size(); i++)
        if (s1.substr(i, s2.size()) == s2)
            cout << i << ' ';

    return 0;
}