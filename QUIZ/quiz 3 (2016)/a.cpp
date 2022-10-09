#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    map<string, int> q;

    for (int i = 0; i < n; ++i)
    {
        string s;
        int k;
        cin >> s >> k;
        q[s] += k;
    }

    map<string, int>::iterator it = q.begin();

    for (; it != q.end(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}