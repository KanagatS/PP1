#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int size;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    sort(a, a + size);

    reverse(a, a + size);
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    return 0;
}