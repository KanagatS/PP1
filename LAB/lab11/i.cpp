#include <bits/stdc++.h>
using namespace std;

bool isPal(string v)
{
    for (int i = 0; i < v.size() / 2; i++)
        if (v[i] != v[v.size() - 1 - i])
            return false;

    return true;
}

int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    do
    {
        if (isPal(s))
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << "ZA WARUDO TOKI WO TOMARE";
                return 0;
            }
        }
    } while (next_permutation(s.begin(), s.end()));

    cout << "JOJO";

    return 0;
}