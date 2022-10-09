#include <bits/stdc++.h>
using namespace std;

string translate(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == (char)'b')
            s[i] = (char)'p';
        if (s[i] == (char)'i')
            s[i] = (char)'e';
    }
    return s;
}

string toLower(string s)
{
    for (int i = 0; i < s.size(); i++)
        s[i] = tolower(s[i]);
    return s;
}

int main()
{
    int size;
    cin >> size;

    while (size--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        if (translate(toLower(s1)) == translate(toLower(s2)))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}