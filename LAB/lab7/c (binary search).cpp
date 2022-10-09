#include <bits/stdc++.h>
using namespace std;

string toSearch(int left, int right, int a[], int k) {
    if (left <= right) {
        int medium = (left + right) / 2;
        if (a[medium] == k) return "Yes";
        else if (a[medium] < k) return toSearch(medium + 1, right, a, k);
        else return toSearch(left, medium - 1, a, k);
    }
    else return "No";
}

int main() {
    int size; cin >> size;
    int a[size];

    for (int i = 0; i < size; i++)
        cin >> a[i];

    int k; cin >> k;

    cout << toSearch(0, size - 1, a, k);

    return 0;
}