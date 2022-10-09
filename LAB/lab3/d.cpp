#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    int max = a[0];
    int max_pos = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            max_pos = i;
        }
        
    }
    cout << max_pos + 1;
}