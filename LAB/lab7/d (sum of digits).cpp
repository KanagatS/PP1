#include <bits/stdc++.h>
using namespace std;

long long toFind(string s, int i, int answer)
{
    if (i == s.size())
        return answer;               // условие выхода
    answer += s[i] - '0';            // итерация
    return toFind(s, i + 1, answer); // итерация в рекурсии
}

int main()
{
    string s;
    cin >> s;
    cout << toFind(s, 0, 0);
    return 0;
}