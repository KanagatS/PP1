#include <iostream>
using namespace std;
int main()
{
    int size;
    int l, r;
    long long sum = 0;
    cin >> size >> l >> r;
    int a[size];

    for (int i = 1; i <= size; i++)
        cin >> a[i];

    for (int i = l; i <= r; i++)
        sum += a[i];
    cout << sum;
}