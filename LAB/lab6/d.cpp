#include <iostream>
#include <cmath>

using namespace std;

bool search(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            return true;
        }
    }
    return false;
}

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main()
{
    int n; cin >> n;
    int a[n];

    input(a, n);

    int x; cin >> x;

    if (search(a, n, x)) cout << "Yes";
    else cout << "No";

    return 0;
}