#include <bits/stdc++.h>
using namespace std;

int result(int x)
{
    int NOD = 0;
    int cnt = 0;

    if (x == 1)
        return 1;

    for (int i = 1; i < x; i++)
        if (x % i == 0)
        {
            NOD = i;
            cnt++;
        }
    
    
    return cnt + result(NOD);
}

int main()
{
    int x;
    cin >> x;

    cout << result(x);
    return 0;
}