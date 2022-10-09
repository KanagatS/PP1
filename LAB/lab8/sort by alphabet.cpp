#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    set<int> v;
    
    for (int i = 0; i < s.size(); i++)
        v.insert(tolower(s[i]));

    cout << v.size();
    cout << endl;

    for (auto &i : v)
        cout << (char)i << " ";

    return 0;
}