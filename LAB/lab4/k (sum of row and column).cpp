#include <iostream>
using namespace std;
int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    int a[size1][size2];
    int row[size1], column[size2];

    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            cin >> a[i][j];

    for (int i = 0; i < size1; i++)
    {
        row[i] = 0;
        for (int j = 0; j < size2; j++)
            row[i] += a[i][j];
    }

    for (int j = 0; j < size2; j++)
    {
        column[j] = 0;
        for (int i = 0; i < size1; i++)
            column[j] += a[i][j];
    }

    for (int i = 0; i < size1; i++)
        cout << "The sum of row number " << i + 1 << " is " << row[i] << endl;

    for (int j = 0; j < size2; j++)
        cout << "The sum of column number " << j + 1 << " is " << column[j] << endl;
    return 0;
}
