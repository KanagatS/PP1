#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    string s, s1;
    cin >> s;
    int sumeven = 0;
    int sumodd = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
            sumeven += s[i] - '0';
        else
            sumodd += s[i] - '0';
    }
    if (sumodd == sumeven)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}