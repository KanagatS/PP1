#include <iostream>
using namespace std;
int main()
{
    int size, k;
    cin >> size;
    int a[size];
    
    for (int i = 0; i < size; ++i)
        cin >> a[i];
    
    for (int i = 0; i < size; ++i)
        if (a[i] != a[i - 1])
            cout << a[i] << " ";
    return 0;
}