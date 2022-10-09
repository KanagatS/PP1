#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int size = n * (n + 1) / 2;

    vector<int> v(size);

    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        fill(v.begin() + sum, v.begin() + sum + i, i);
        sum += i;
    }

    for (auto &i : v)
        cout << i << " ";
    return 0;
}