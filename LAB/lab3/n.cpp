#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    for (int i = 0; i < size; i++)
        a[i] = a[i] * a[i];

    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    return 0;
}