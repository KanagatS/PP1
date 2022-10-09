#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    map<int, int> q;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        q[x]++;
    }

    int ans = 0;

    for (map<int, int>::iterator it = q.begin(); it != q.end(); ++it)

        if (it->second > 1)
            ans++;

    cout << ans << "\n";
    return 0;
}