#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> &a, pair<string, int> &b){
    return (a.second > b.second);
}

int main()
{
    string s;
    map<string, int> m;

    while (cin >> s)
        m[s]++;

    vector<pair<string, int>> v;
    for (auto &it : m)
        v.push_back(make_pair(it.first, it.second));

    sort(v.begin(), v.end(), cmp);

    for (auto &i : v)
        cout << i.first << " : " << i.second << endl;
    
    return 0;
}