#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int size1;
    cin >> size1;
    int a[size1];

    for (int i = 0; i < size1; i++)
        cin >> a[i];

    int size2;
    cin >> size2;
    int b[size2];

    for (int i = 0; i < size2; i++)
        cin >> b[i];

    sort(a, a + size1);
    sort(b, b + size2);

    int size3;
    int c[size3] = sort((a, a + size1), (b, b + size2));

    for (int i = 0; i < size3; i++)
        cout << c[i] << " ";

    return 0;
}