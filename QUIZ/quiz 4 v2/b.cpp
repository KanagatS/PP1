#include <bits/stdc++.h>
using namespace std;

bool isDuplicate(int n)
{
    if (n / 10000 == 1) //if number has 5 digits
    {
        int dig1 = n / 10000;
        int dig2 = (n / 1000) % 10;
        int dig3 = (n / 100) % 10;
        int dig4 = (n / 10) % 10;
        int dig5 = n % 10;

        int cnt = 0;

        set<int> s;
        s.insert(dig1); cnt++;
        s.insert(dig2); cnt++;
        s.insert(dig3); cnt++;
        s.insert(dig4); cnt++;
        s.insert(dig5); cnt++;

        if (s.size() == cnt)
            return true;

        else
            return false;
    }
    
    else if (n / 100000 == 1) // if number has 6 digits
    {
        int dig1 = n / 100000;
        int dig2 = (n / 10000) % 10;
        int dig3 = (n / 1000) % 10;
        int dig4 = (n / 100) & 10;
        int dig5 = (n / 10) % 10;
        int dig6 = n % 10;

        int cnt = 0;

        set<int> s;
        s.insert(dig1); cnt++;
        s.insert(dig2); cnt++;
        s.insert(dig3); cnt++;
        s.insert(dig4); cnt++;
        s.insert(dig5); cnt++;
        s.insert(dig6); cnt++;

        if (s.size() == cnt)
            return true;

        else
            return false;
    }
    
    else // if number has 4 digits
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

        else
            return false;
    }
}

int main()
{
    int l, r;
    cin >> l >> r;
    for (int i = l; i <= r; i++)
        if (isDuplicate(i) == true)
        {
            cout << i;
            return 0;
        }

    cout << "Understandable, have a great day";
    return 0;
}
