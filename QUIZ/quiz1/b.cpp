#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int dig1 = n / 100000;
    int dig2 = (n / 10000) % 10;
    int dig5 = (n / 10) % 10;
    int dig6 = n % 10;

    if (dig1 + dig2 == dig5 + dig6)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}