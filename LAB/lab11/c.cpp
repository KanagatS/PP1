#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;

    map<string, double> mymap;
    multimap<double, string> mymap2;
    multimap<double, string>::iterator it;

    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        mymap[s] += x;
        total += x;
    }

    for (auto &i : mymap)
    {
        i.second = (double)(i.second / total * 100);
        mymap2.insert({i.second, i.first});
    }
    
    for (it = --mymap2.end(); it != --mymap2.begin(); it--)
        cout << (*it).second << " " << (*it).first << "%\n";

    return 0;
}