#include <bits/stdc++.h>
using namespace std;

int x = 0;
long long power()
{
    long long n = pow(x, x);
    x++;
    return n;
}

int main()
{
    int n;
    cin >> n;

    vector<long long> v(n + 1);

    generate(v.begin(), v.end(), power);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    return 0;
}