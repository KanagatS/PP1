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

    int max = a[0][0];
    int row = 0;
    int column = 0;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (a[i][j] > max){
                max = a[i][j];
                row = i;
                column = j;
            }
    cout << row + 1 << " " << column + 1;
}