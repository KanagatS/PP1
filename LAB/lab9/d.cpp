#include <bits/stdc++.h>
#define sep " "
#define ll long long
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == k)
            cnt++;
    }

    cout << cnt;
    return 0;
}