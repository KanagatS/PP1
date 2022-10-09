#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    string s;

    map<string, int> m;

    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> s >> x;
        m[s] += x;
    }

    map<string, int>::iterator it = m.begin();

    //int mycount = count(m.begin(), m.end(), "apple");

    for (; it != m.end(); it++)
    {
        cout << (int)count(m.begin(), m.end(), "apple");
    }

    return 0;
}