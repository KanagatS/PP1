#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size][size];

    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            cin >> a[i][j];

    for (int i = size - 1; i > 0; --i)
    {
        for (int j = 0; j + i < size; j++)
            cout << a[j][j + i] << " ";
        cout << endl;
    }
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j + i < size; j++)
            cout << a[j + i][j] << " ";
        cout << endl;
    }
    return 0;
}