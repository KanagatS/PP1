#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count[10];
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i] - '0']++;
    }
    
    return 0;
}