#include <iostream>
using namespace std;
int main()
{
    int size, num = 0;
    cin >> size;
    
    int a[size][size];

    for (int i = 0; i < size; i++)
        a[0][i] = a[i][0] = num++;

    for (int i = 1; i < size; i++)
        for (int j = 1; j < size; j++)
            a[i][j] = a[0][j] * a[i][0];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}