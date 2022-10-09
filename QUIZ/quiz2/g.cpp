#include <iostream>
#include <limits>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int i = j + 1; j < s.size(); j++)
        {
            if (s[i] == s[j])
            {
                cout << s[i];
            }
        }
    }

    // const char *input = "aaaddbss";
    // int occurrences[UINT16_MAX + 1] = {0};
    // for (int i = 0; input[i] != '\0'; i++)
    // {
    //     unsigned char c = input[i];
    //     if (occurrences[c] == 0)
    //     {
    //         occurrences[c]++;
    //     }
    //     else if (occurrences[c] == 1)
    //     {
    //         occurrences[c]++;
    //         cout << "duplicate: " << c << endl;
    //     }
    // }
    // cout << endl;
}