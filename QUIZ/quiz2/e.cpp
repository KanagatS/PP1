#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[500500];

    for (int i = 0; i < s.size(); i++)
        a[s[i] - '0'] += 1;

    for (int i = 0; i <= 9; ++i)
        if (a[i] != 0)
            cout << i << ": " << a[i] << endl;

    return 0;
}