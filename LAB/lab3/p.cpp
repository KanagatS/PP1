#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if ((int)sqrt(a) * (int)sqrt(a) == a)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}