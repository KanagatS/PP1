#include <bits/stdc++.h>
using namespace std;

int sum;
bool used[12][12];

void dfs(char a[][12], int x, int y, int n)
{
    sum++;
    used[x][y] = true;
    if (x + 1 <= n && !used[x + 1][y] && a[x + 1][y] == '.')
        dfs(a, x + 1, y, n);
    if (x - 1 > 0 && !used[x - 1][y] && a[x - 1][y] == '.')
        dfs(a, x - 1, y, n);
    if (y + 1 <= n && !used[x][y + 1] && a[x][y + 1] == '.')
        dfs(a, x, y + 1, n);
    if (y - 1 > 0 && !used[x][y - 1] && a[x][y - 1] == '.')
        dfs(a, x, y - 1, n);
}

int main()
{
    int n;
    cin >> n;
    
    char a[12][12];
    
    int x, y;
    cin >> x >> y;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];

    dfs(a, y, x, n);

    cout << sum;
}