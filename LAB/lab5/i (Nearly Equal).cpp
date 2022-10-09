#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    const int N = INT8_MAX;
    string s , t;
    int cnt[N], cnt1[N];
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++)
        cnt[s[i] - 'a']++;
    for (int i = 0; i < t.size(); i++)
        cnt1[t[i] - 'a']++;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (cnt[i - 'z'] != cnt1[i - 'a'])
        {
            cout << "NO";
            exit(0);
        }
    }
    cout << "YES";
    return 0;
}
