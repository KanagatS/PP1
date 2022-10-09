#include <bits/stdc++.h>
using namespace std;

int result(int n, int ans)
{
    if (n == 0) return ans;
    else return result(n / 10, ans += (n % 10) / 2);
}

int main()
{
    int n;
    cin >> n;
    cout << result(n, 0);
    return 0;
}