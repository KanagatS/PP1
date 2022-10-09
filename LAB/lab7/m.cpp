#include <bits/stdc++.h>
using namespace std;

void rec(int n, int i){
    if (i > n) return;
    cout << i << " ";
    rec(n, i + 1);
}


int main()
{
    int n;
    cin >> n;
    rec(n, 1);
    return 0;
}