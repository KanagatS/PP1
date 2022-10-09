#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    map<pair<pair<string, int>, pair<string, int>>, int> m;

    for (int i = 0; i < n; i++)
    {
        string n1, n2;
        int s1, s2;
        cin >> n1 >> s1 >> n2 >> s2;
        m[make_pair(make_pair(n1, s1), make_pair(n2, s2))] = s1 + s2;
    }
    map<pair<pair<string, int>, pair<string, int>>, int>::iterator it;
    
    for (it = m.begin(); it != m.end(); it++)
        cout << ((*it).first.first.first) << " and " << ((*it).first.second.first) << " " << (*it).second << endl;
    
    return 0;
}