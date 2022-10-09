#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

double perc(int a, int b) {
    return b * 100 / a;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    int a, b;
    cin >> a >> b;

    cout << setprecision(3) << perc(a, b);
      
    return 0;
}