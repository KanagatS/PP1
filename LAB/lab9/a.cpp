#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    pair<int, int> a[2001];
    for (int i = 0; i < size; i++)
        cin >> a[i].first >> a[i].second;
    
    sort(a, a + size);
    
    for (int i = 0; i < size; i++)
        cout << a[i].first << " " <<
                 a[i].second << endl;
    
    return 0;
}
