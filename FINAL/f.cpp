#include <bits/stdc++.h>
using namespace std;

int isReversed(int n)
{
    int reversedN = 0;
    while (n != 0)
    {
        reversedN = reversedN * 10 + n % 10;
        n /= 10;
    }

    return reversedN;
}

int main()
{
    int n;
    cin >> n;
    
    vector<int> sol;
    
    while (n--)
    {
        int a, b, c;
        cin >> a >> b;
        c = isReversed(a) + isReversed(b);
        sol.push_back(isReversed(c));
    }

    for (auto &i : sol)
        cout << i << endl;

    return 0;
}