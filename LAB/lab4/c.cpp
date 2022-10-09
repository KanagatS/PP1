#include <iostream>
using namespace std;
int main()
{
    int size1, size2;
    int countofnegative = 0;
    cin >> size1 >> size2;
    int a[size1][size2];

    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            cin >> a[i][j];

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
            if (a[i][j] < 0)
                countofnegative++;
    }
    cout << countofnegative << endl;

    return 0;
}