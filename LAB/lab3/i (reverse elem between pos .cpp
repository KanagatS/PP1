#include <iostream>
using namespace std;
int main()
{
    int size, l, r;
    cin >> size >> l >> r;
    int a[size];

    for (int i = 1; i <= size; i++)
        cin >> a[i];

    for (int i = 1; i < l; ++i)
        cout << a[i] << " ";
    for (int i = r; i >= l; --i)
        cout << a[i] << " ";
    for (int i = r + 1; i <= size; ++i)
        cout << a[i] << " ";
}