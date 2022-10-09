#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

bool lucky(string s) {
    int sm = 0;
    int last = s[s.size() - 1] - 48;

    for (int i = 0; i < s.size(); i++)
        sm += s[i] - 48;

    return sm % last == 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    string s; cin >> s;

    cout << ((lucky(s)) ? "Yes" : "No");

    return 0;
}