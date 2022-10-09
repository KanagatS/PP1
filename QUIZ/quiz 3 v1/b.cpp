#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mymap;
    int size;
    cin >> size;
    int cnt = 0;

    for (int i = 0; i < size; i++)
    {
        string s;
        cin >> s;
        mymap[s]++;
        if (mymap[s] >= 2)
        {
            cnt++;
            cout << s << endl;
            mymap[s] = -10000;
        }
    }
    if (cnt == 0)
        cout << "No cheater !!!";

    return 0;
}