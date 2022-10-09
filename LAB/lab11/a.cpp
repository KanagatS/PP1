#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    if (s == "SUN"){
        cout << 7;
        return 0;
    }
    if (s == "MON"){
        cout << 6;
        return 0;
    }
    if (s == "TUE"){
        cout << 5;
        return 0;
    }
    if (s == "WED"){
        cout << 4;
        return 0;
    }
    if (s == "THU"){
        cout << 3;
        return 0;
    }
    if (s == "FRI"){
        cout << 2;
        return 0;
    }
    if (s == "SAT"){
        cout << 1;
        return 0;
    }
}