#include <iostream>
#include <string>
using namespace std;
#define ll long long;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    for (int i = 0; i + int(s2.size()) - 1 < s1.size(); i++)
    {
        string c = s1.substr(i, int(s2.size()));
        if (c == s2)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}