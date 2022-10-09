#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int cnt = 0;

    set<int> s;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
        cnt++;
    }
    
    if (s.size() == cnt)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}