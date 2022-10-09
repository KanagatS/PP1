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

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        int j = size - 1 - i;
        sum += a[i][j];
    }
    
    cout << sum;
    return 0;
}