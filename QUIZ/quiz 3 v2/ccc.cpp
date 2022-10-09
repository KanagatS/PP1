#include <bits/stdc++.h>
using namespace std;

void result(int size, int answer)
{
    map<string, int> m;
    for (int i = 0; i < size; i++)
    {
        char znak;
        cin >> znak;
        string s1, s2;

        cin >> s1 >> m[s1];
        cin >> s2 >> m[s2];

        if (znak == '+')
            answer = m[s1] + m[s2];
        else if (znak == '-')
            answer = m[s1] - m[s2];
        else if (znak == '*')
            answer = m[s1] * m[s2];

        cout << s1 << " " << znak << " " << s2 << " = " << answer << endl;
    }
}

int main()
{
    int size;
    cin >> size;

    long long answer = 0;

    result(size, answer);
    return 0;
}