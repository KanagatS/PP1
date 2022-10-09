#include <iostream>
using namespace std;
#define sep " "
int main()
{

    int size1, size2;
    cin >> size1 >> size2;
    int a[size1][size2];
    int row[size1], column[size2];

    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            cin >> a[i][j];

    int sum = 0;
    int min, x, y;

    cout << "coordinates of min elements:" << endl;

    for (int j = 0; j < size2; j++)
    {
        min = a[0][j];
        x = 1;
        y = j + 1;
        for (int i = 0; i < size1; i++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
        sum += min;
        cout << x << ";" << y << endl;
    }
    cout << "Their sum:" << endl
         << sum;
    return 0;
}
