#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = 0;
    int r = int(s.size()) - 1;
    int count = 0;

    while (r > l)
    {
        if (s[l] == s[r])
        {
            l++;
            r--;
        }
        else
        {
            count++;
            if (count >= 2)
            {
                cout << "NO";
                exit(0);
            }
            if (s[l + 1] == s[r])
            {
                ++l;
            }
            else if (s[r - 1] == s[l])
            {
                --r;
            }
            else
            {
                cout << "NO";
                exit(0);
            }
        }
    }
    cout << "YES";
}