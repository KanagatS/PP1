#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int count_of_7 = 0;
    for (int i = 0; i < n; i++)
        if (a[i] % 10 == 7)
            count_of_7++;
    cout << count_of_7;
}