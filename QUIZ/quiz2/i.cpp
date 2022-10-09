#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'b')
        {
            cout << "YES";
            return 0;
        }
        else
        {
            cout << "NO";
            return 0;
        }
        ​​​​​​​
    }
    cout << s;

    return 0;
}