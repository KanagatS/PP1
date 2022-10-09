#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[500500], cnt = 0;
    for (int i = 0; i < 500500; i++)
    {
        cin >> a[i];
        if (a[i] > a[i - 1])
            cnt++;
        if (a[i] == 0)
            break;
    }
    cout << cnt;

    return 0;
}