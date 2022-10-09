#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<string> v1;

    for (int i = 0; i < size; i++)
    {
        string s;
        cin >> s;
        v1.push_back(s);
    }

    int size2;
    cin >> size2;
    vector<string> v2;

    for (int i = 0; i < size2; i++)
    {
        string s;
        cin >> s;
        v2.push_back(s);
    }
    vector<string> v3;
    for (int i = 0; i < v1.size(); i++)
    {
        if (count(v2.begin(), v2.end(), v1[i]) == 0)
            v3.push_back(v1[i]);
    }

    vector<string> v4;
    for (int i = 0; i < v2.size(); i++)
    {
        if (count(v1.begin(), v1.end(), v2[i]) == 0)
            v4.push_back(v2[i]);
    }

    cout << "Missed students:" << endl;
    for (int i = 0; i < v3.size(); i++)
        cout << "- " << v3[i] << endl;

    cout << "Not in the group:" << endl;
    for (int i = 0; i < v4.size(); i++)
        cout << "- " << v4[i] << endl;

    return 0;
}