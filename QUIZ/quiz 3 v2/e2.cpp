#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<int> v;
    int cnt = 0;

    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
        {
            v.push_back(i);
            cnt++;
        }
    }
    sort(v.rbegin(), v.rend());

    cout << cnt << " " << v[0];
    return 0;
}