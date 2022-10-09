#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    vector<int> v1;
    vector<int> v2;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    sort(v1.begin(), v1.end());

    for (int i = 0; i < v2.size();)
    {
        for (int j = i; j < v1.size();)
        {
            if (v2[i] == v1[j] + v1[j + 1])
            {
                cout << "YES" << endl;
                i++;
                j++;
            }
            else
            {
                cout << "NO" << endl;
                i++;
                j++;
            }
        }
    }

    return 0;
}