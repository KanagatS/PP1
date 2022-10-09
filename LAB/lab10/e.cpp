#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int total = 0;

    map<string, double> mymap;
    map<string, double>::iterator it;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;

        string s;
        int x;

        for (int j = 0; j < m; j++)
        {
            cin >> s >> x;
            mymap[s] += x;
            total += x;
        }
    }

    for (it = mymap.begin(); it != mymap.end(); it++)
    {
        (*it).second = (*it).second / total * 100;
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}