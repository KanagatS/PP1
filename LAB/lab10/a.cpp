#include <bits/stdc++.h>
using namespace std;

string toLower(string s)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);

    return s;
}

bool cmp(string s, string s2)
{
    toLower(s);
    toLower(s2);

    bool ok = true;

    for (int i = 0; i < s.size(); i++)
    {
        if (i == s2.size() || s[i] > s2[i])
            return false;
        else if (s[i] < s2[i])
            return true;
    }
}

int main()
{
    int n;
    cin >> n;

    vector<string> vs;
    vector<int> vi;

    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        vs.push_back(s);
        vi.push_back(x);
    }

    sort(vs.begin(), vs.end(), cmp);
    sort(vi.begin(), vi.end());

    for (int i = 0; i < n; i++)
        cout << vs[i] << " " << vi[i] << endl;

    return 0;
}