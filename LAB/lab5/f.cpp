#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int a, b;
    cin >> s >> a >> b;
    for (int i = a; i <= b; i++)
    {
        cout << s[i];
    }

    return 0;
}