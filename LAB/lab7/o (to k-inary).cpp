#include <bits/stdc++.h>
using namespace std;

char get(int a)
{
    if (a >= 10)
        return 'A' + a - 10;
    return a + 48;
}

void toKinary(int n, int k)
{
    if (n == 0)
        return;
    toKinary(n / k, k);
    cout << get(n % k);
}

int main()
{
    int n;
    unsigned short k;
    cin >> n >> k;
    toKinary(n, k);
    return 0;
}