#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
        if (i + 1 <= k)
            cout << v[i] << " ";

    return 0;
}