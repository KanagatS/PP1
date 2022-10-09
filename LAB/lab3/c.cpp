#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    int max = -5555555;
    for (int i = 0; i < size; i++)
        if (a[i] > max)
            max = a[i];

    cout << max;
}
