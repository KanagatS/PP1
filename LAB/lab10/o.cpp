#include <bits/stdc++.h>
using namespace std;

void toBinary(int n)
{
    string s = "";
    while (n > 0)
    {
        s += char(n % 2 + 48);
        n /= 2;
    }
    
    reverse(s.begin(), s.end());
    cout << s << endl;
}

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    for_each(v.begin(), v.end(), toBinary);
    return 0;
}