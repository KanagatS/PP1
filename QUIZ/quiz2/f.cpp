#include <iostream>
using namespace std;
int main()
{
    int size1, size2, n;
    cin >> size1 >> size2;
    cin >> n;
    int count = 0;
    int a[size1][size2];
    
    for (int i = 0; i < size1; i++)
        for (int j = 0; j < size2; j++)
            cin >> a[i][j];
    
    
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a[i][j] == n)
            {
                count++;
                break;
            }
        }
    }
    cout << count;
    return 0;
}