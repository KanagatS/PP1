#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;

    if (find(v.begin(), v.end(), k) != v.end())
        cout << "YES";
    else
        cout << "NO";
    
    return 0;
}