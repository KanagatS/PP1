#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (size_t i = 0; i < s.size(); i++)
    {
        if (s[i] == (char)'B')
        {
            s[i] = (char)'F';
        }
        if (s[i] == (char)'R')
        {
            s[i] = (char)'L';
        }
        if (s[i] == (char)'L')
        {
            s[i] = (char)'R';
        }
        
    }
    
    return 0;
}