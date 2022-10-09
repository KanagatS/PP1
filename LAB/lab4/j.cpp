#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            
            if ((i + j) % 2 == 0) {
                a[i][j]++;
            } else {
                a[i][j]--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;

}