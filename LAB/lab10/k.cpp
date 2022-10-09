#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool isPrime(int n)
{

    if (n == 1 || n == 0)
        return false;

    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;

    return true;
}

int modul(int n)
{
    return abs(n);
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(modul(x));
    }

    int cnt = count_if(v.begin(), v.end(), isPrime);

    cout << cnt;

    return 0;
}