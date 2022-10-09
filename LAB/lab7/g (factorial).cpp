#include <bits/stdc++.h>
using namespace std;

int fact(int n, int answer)
{
    if (n == 0)
        return answer;
    answer *= n;
    return fact(n - 1, answer);
}

int main()
{
    int n;
    cin >> n;
    cout << fact(n, 1);
    return 0;
}