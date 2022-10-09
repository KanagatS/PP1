#include <iostream>
using namespace std;
int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    int a[size1][size2];

    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            cin >> a[i][j];

    int row_min = 0, mn = 10000, sum = 0;

    for (int row = 0; row < size1; row++)
    {
        for (int col = 0; col < size2; col++)
        {
            sum = sum + a[row][col];
        }

        if (sum < mn)
        {
            mn = sum;
            row_min = row;
        }

        sum = 0;
    }

    cout << row_min + 1 << endl;

    return 0;
}