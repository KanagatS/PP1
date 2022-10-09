#include <bits/stdc++.h>
using namespace std;

int degree(int cur, int n)
{
    if (n == 0)
        return cur;
    cur *= 2;
    return degree(cur, n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << degree(1, n);
    return 0;
}