#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    vector<pair<int, int>> v;

    for (int i = 0; i < size; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }


    for (int i = 0; i < v.size(); i++)
    {
        cout << count(v.begin(), v.end(), )
    }
    

    return 0;
}