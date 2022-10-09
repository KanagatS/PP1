#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int size2;
    cin >> size2;
    vector<int> v2;

    for (int i = 0; i < size2; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    for (int i = 0; i < v2.size(); i++)
        cout << count(v.begin(), v.end(), v2[i]) << endl;

    return 0;
}