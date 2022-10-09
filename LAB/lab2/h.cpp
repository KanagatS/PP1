#include <iostream>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    int count_of_even = 0;
    int count_of_odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
            count_of_even++;
        else
        {
            count_of_odd++;
        }
    }
    cout << count_of_even << " " << count_of_odd;
    return 0;
}