#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size1, size2;
    cin >> size1 >> size2;
    int a[size1][size2];

    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            cin >> a[i][j];

    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
        {
            if ((a[i][j] == 0 && a[i + 1][j] == 0 && a[i][j + 1] == 0 && a[i + 1][j + 1] == 0) ||
                (a[i][j] == 1 && a[i + 1][j] == 1 && a[i][j + 1] == 1 && a[i + 1][j + 1] == 1))
            {
                cout << "NO";
                return 0;
            }
        }
    
    cout << "YES";
    return 0;
}
