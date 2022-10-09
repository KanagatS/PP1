#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> v(100001);

    while (n--){
        int x; cin >> x;
        fill(v.begin(), v.begin() + x, x);
    }

    v.erase(remove(v.begin(), v.end(), 0));

    set<int> s(v.begin(), v.end());

    cout << s.size() - 1;

    return 0;
}