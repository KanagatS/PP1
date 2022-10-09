#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

bool check(char ch) {
    string vowels = "aeiou";

    for (int i = 0; i < vowels.size(); i++) {
        if (vowels[i] == ch || vowels[i] == tolower(ch)) {
            return false;
        }
    }

    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++) {
        if (check(s[i])) cout << s[i];
    }

    return 0;
}