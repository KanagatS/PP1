#include <bits/stdc++.h>
using namespace std;

string isDegOfTwo(int k){
    if (k == 1)         return "Yes";
    if (k % 2 != 0)     return "No";
    return isDegOfTwo(k / 2);
}




int main()
{
    int n;
    cin >> n;
    cout << isDegOfTwo(n);
    return 0;
}