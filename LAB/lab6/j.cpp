#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int mx(int a, int b) {
    return (a > b) ? a : b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << mx(mx(a, b), mx(c, d));

    return 0;
}