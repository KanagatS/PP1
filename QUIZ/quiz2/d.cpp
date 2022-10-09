#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
    for (int i = 0; i < (int)s.size() / 2; i++)
    {
        if (s[i] != s[(int)s.size() - i - 1])
            return false;
    }
    return true;
}

int main()
{
    string s; cin >> s;
    
    if (palindrome(s) == true)
        cout << s.length() - 1;
    
    
    else if (palindrome(s) == false)
        cout << s.length();
}
