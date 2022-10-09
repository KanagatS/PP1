#include <iostream>
using namespace std;
int main()
{
    int a, n = 1;
    cin >> a;
    for (n; n*n <= a; n++){
        cout << n*n << " ";
    }
    
    return 0;
}