#include <bits/stdc++.h>
using namespace std;

void result(int n)
{
    for (int i = 2; i <= n; i++)
        if (n % i == 0)
        {
            cout << i << " ";
            n /= i;
            break;
        }

    result(n);
}

int main()
{
    int n;
    cin >> n;
    result(n);
    return 0;
}