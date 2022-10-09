#include <bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    // reverse(s.begin(), s.end());
    char first = 97; // a
    char last = 122; // z

    for (int i = 0; i < s.size(); i++)
        s[i] = first - s[i] + last;

    return s;
}

int main()
{
    string s;
    cin >> s;
    cout << reverse(s);
    return 0;
}