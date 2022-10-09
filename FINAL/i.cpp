#include <bits/stdc++.h>
using namespace std;

string newWord(string a, string b)
{
    string ab;
    ab = a + b;
    // for (int i = 0; i <= a.size() - b.size(); i++)
    // {
    //     if (a.substr(i, b.size()) == b)
    //         ab = a;
    //     else
    //         ab = a + b;
    // }

    auto ss = unique(ab.begin(), ab.end());

    ab.erase(ss, ab.end());

    return ab;
}

int main()
{
    string a, b;
    cin >> a >> b;
    cout << newWord(a, b);
    return 0;
}