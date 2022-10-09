#include <bits/stdc++.h>
using namespace std;
int chesstable[8][8];

void place_pieces(string pos)
{
    int x = pos[1] - '1';
    int y = pos[0] - 'A';
    chesstable[x][y] = 1;
}

int main()
{
    int size;
    cin >> size;

    for (int i = 0; i < size; ++i)
    {
        string s;
        cin >> s;
        place_pieces(s);
    }

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)

        {
            if (chesstable[i][j] == 1)
                cout << '*';
            else
                cout << 0;
        }
        cout << endl;
    }

    return 0;
}