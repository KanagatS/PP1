#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    for (int i = size; i > 0; i--)
    {
        cout << a[i] << sep;
    }

    return 0;
}