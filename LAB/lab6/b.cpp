#include <iostream>
#include <cmath>

using namespace std;

void output(int a[], int b[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] - b[i] << ' ';
    }
}

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

int main() {
    int n; cin >> n;
    int a[n], b[n];

    input(a, n);
    input(b, n);

    output(a, b, n);

    return 0;
}