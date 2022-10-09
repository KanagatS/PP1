#include <bits/stdc++.h>
using namespace std;

bool indexPrime(int n){
    
}

bool isPrime(int n)
{
    if (n == 1)
        return false;

    for (int i = 2; i <= sqrt(n); ++i)
        if (n % i == 0)
            return false;

    return true;
}

int main(){
    int n;
    cin >> n;

    int number = 1, cnt = 0;

    while (n > cnt)
    {
        number++;

        if (isPrime(number) && indexPrime(number))
            cnt++;
    }

    cout << number;

    return 0;
}