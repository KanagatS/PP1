#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int dig1 = b / 100;
    int dig3 = b % 10;
    cout << a + (dig1 + dig3) << endl;
    return 0;

}