#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
        cin >> a[i];

    int mode = 0;
    for (int i = 0; i < size; i++)
        if (a[i - 1] == a[i])
            mode = a[i - 1];
    cout << mode;

    return 0;
}