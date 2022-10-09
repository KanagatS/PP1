#include <iostream>

using namespace std;

bool check(int n, int m, int i, int j)
{
    if ((i >= 0 && i <= n - 1) && (j >= 0 && j <= m - 1))
        return false;
    else
        return true;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];

    int number = 0;
    int i = 0, j = 0;
    int pos = 0;
    
    // заполнение массива
    while (number < n * m)
    {

        a[i][j] = ++number;
        i++;
        j--;
        if (check(n, m, i, j))
        {
            j = pos;
            i = 0;
            pos++;
        }
    }

    // вывод массива
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            //cout << a[i][j] << ' ';
            if (a[i][j] < 10)
                cout << " " << a[i][j];
            else
                cout << ' ' << a[i][j];
        }
        cout << endl;
    }
    return 0;
}