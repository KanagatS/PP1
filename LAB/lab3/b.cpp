#include <iostream>
using namespace std;
int main()
{
    int size, countofpositive = 0;
    cin >> size;
    int a[size];

    for (int i = 0; i < size; i++){
        cin >> a[i];
        if (a[i] > 0) countofpositive++;
    }

    cout << countofpositive;
}