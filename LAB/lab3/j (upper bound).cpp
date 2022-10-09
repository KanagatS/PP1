#include <iostream>
using namespace std;
int main()
{
    int size, m, k;
    cin >> size >> m;
    int a[size];

    for (int i = 0; i < size; ++i)
        cin >> a[i];

    for (int i = 0; i < size; ++i)
        if (a[i] <= m)
            k = i;
    
    cout << k + 1;
}