#include <bits/stdc++.h>
using namespace std;

bool isDuplicate(int n)
{
    int dig1 = n / 1000;
    int dig2 = (n / 100) % 10;
    int dig3 = (n / 10) % 10;
    int dig4 = n % 10;

    int cnt = 0;
    
    set<int> s;
    s.insert(dig1); cnt++;
    s.insert(dig2); cnt++;
    s.insert(dig3); cnt++;
    s.insert(dig4); cnt++;


    if (s.size() == cnt)
        return true;
    
    else return false;

}

int main()
{
    int n;
    cin >> n;
    
    for (int i = n; i <= 9999; i++)
        if (i > n && isDuplicate(i) == true)
        {
            cout << i;
            return 0;
        }

    return 0;
}