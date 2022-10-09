#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    unsigned short n, a, b;
    n = s.size();
    cin >> n >> a >> b >> s;

    int cntup = 0, cntdown = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            cntup++;
        if (s[i] >= 'a' && s[i] <= 'z')
            cntdown++;
    }

    int costup = cntup * a;
    int costdown = cntdown * b;

    cout << min(costup, costdown);
    
    return 0;
}