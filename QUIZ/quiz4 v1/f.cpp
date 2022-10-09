#include <bits/stdc++.h>
using namespace std;

void maxword(string s, string long_word, int max)
{
    while (cin >> s)
        if (s.size() > max){
            max = s.size();
            long_word = s;
        }

    cout << long_word;
}

int main()
{
    string s;
    maxword(s, "", 0);

    return 0;
}