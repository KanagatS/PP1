#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return false;

    return true;
}

void primeFact(int n)
{
    for (int i = 2; i <= n; i++)
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
}

int main()
{
    int n;
    cin >> n;
    primeFact(n);
    return 0;
}