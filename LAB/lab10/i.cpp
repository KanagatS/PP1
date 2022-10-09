#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v1;
    vector<int> v2;

    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        v1.pb(x);
        v2.pb(x);
    }
    reverse(v1.begin(), v1.end());
    for (int i = 0; i < v1.size(); i++)
    {
        if (v2[i] == v1[i]) cout << "OK" << endl;
        else cout << "Instead of " << v2[i] << " here was " <<
        v1[i] << endl;
    }
    
    return 0;
}