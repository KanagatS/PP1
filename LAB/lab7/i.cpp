#include <bits/stdc++.h>
using namespace std;

long long summ(long long ans)
{
    int n;
    cin >> n;
    if (n == 0)
        return ans;
    ans += n;
    return summ(ans);
}

int main()
{
    cout << summ(0);
    return 0;
}