#include <iostream>
using namespace std;
int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    int a[size1][size2];

    int num = 1;
    int j = 0;
    int i = 0;

    while (num <= size1 * size2)
    {
        while (j <= size2 - 1)
        {
            a[i][j] = num;
            if (a[i + 1][j + 1] - a[i][j] == 1)
            {
                num += 2;
                j++;
            }
            if (a[i + 1][j + 1] - a[i][j] == 2)
            {
                num += 3;
                j++;
            }
            if (a[i + 1][j + 1] - a[i][j] == 3)
            {
                num += 4;
                j++;
            }
            if (a[i + 1][j + 1] - a[i][j] == 4)
            {
                num += 4;
                j++;
            }

            // j++;
            // num+= 3;
        }
        j -= size2;
        i++;

        // while (j >= 0)
        // {
        //     a[i][j] = num;
        //     j--;
        //     num+=3;
        // }
        // j++;
        // i++;
    }

    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
