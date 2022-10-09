#include <bits/stdc++.h>

#define sep ' '
#define ll long long

using namespace std;

void output(int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << ' ';
    }
}

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
      
    int n; cin >> n;
    int a[n];

    input(a, n);
    output(a, n);
      
    return 0;
}