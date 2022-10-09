#include <iostream>
using namespace std;
int main()
{

    int size;
    cin >> size;
    int a[size][size];
    int num = 1;
    int j = 0;
    int i = 0;

    while (num <= size * size)
    {
        while (j <= size - 1)
        {
            a[i][j] = num;
            j++;
            num++;
        }
        j--;
        i++;
        while (j >= 0)
        {
            a[i][j] = num;
            j--;
            num++;
        }
        j++;
        i++;
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
        ;
    }
}
