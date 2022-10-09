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

    int max = -5555555;
    int max2 = -5555555;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (a[i][j] > max)
            {
                max2 = max;
                max = a[i][j];
            }
            else if (a[i][j] > max2 && a[i][j] != max)
                max2 = a[i][j];
        }
    }

    if (max2 == -5555555)
        cout << "0";
    else
        cout << max2;
    return 0;
}