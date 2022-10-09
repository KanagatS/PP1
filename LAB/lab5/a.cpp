#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count_of_small = 0, count_of_capital = 0;
    string s; cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') count_of_small++;
        else count_of_capital++;
    }

    cout << count_of_small << " " << count_of_capital;

    return 0;
}