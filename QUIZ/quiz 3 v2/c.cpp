#include <bits/stdc++.h>
using namespace std;

void result(int size, char znak, string s1, a[], strig s2, a[])
{
    int answer = 0;

    for (int i = 0; i < size; i++)
    {

        char znak;
        cin >> znak;

        string s1;
        cin >> s1;
        cin >> var[s1];

        string s2;
        cin >> s2;
        cin >> var[s2];

        if (znak == '+')
            answer = x[s1] + y[s2];
        else if (znak == '*')
            answer = x[s1] + y[s2];
        else if (znak == '-')
            answer = x[s1] + y[s2];
        cout << s1 << " " << znak << " " << s2 << " = " << answer << endl;
    }
}

int main()
{
    int size;
    cin >> size;
    map<string, int> var;
    // for (int i = 0; i < size; i++)
    // {
    // char znak;
    // cin >> znak;

    // string s1;
    // cin >> s1;
    // cin >> var[s1];

    // string s2;
    // cin >> s2;
    // cin >> var[s2];

    // int ans;
    // switch (znak)
    // {
    // case '+':
    //     ans = var[s1] + var[s2];
    // case '-':
    //     ans = var[s1] - var[s2];
    // case '*':
    //     ans = var[s1] * var[s2];
    // }
    // cout << a << " " << znak << ' ' << b << " = " << ans << endl;

    result();
    return 0;
}