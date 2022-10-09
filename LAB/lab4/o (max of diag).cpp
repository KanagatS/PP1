#include <iostream>
using namespace std;
int main()
{
    int size, x, y;
    int maxofdiag = INT8_MIN;
    cin >> size;
    int a[size][size];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> a[i][j];
            if (i == j)
            {
                if (a[i][j] > maxofdiag)
                {
                    maxofdiag = a[i][j];
                    x = i;
                    y = j;
                }
            }
        }
    }
    cout << "Maximum element is: " << maxofdiag << " "
         << "with coordinates: " << x+1 << ";" << y+1;
    return 0;
}