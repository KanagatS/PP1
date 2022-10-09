#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double function(double x, double y)
{
    double c = sqrt(x * x + y * y);
    return c;
}

int main()
{
    double a, b;
    cin >> a >> b;
    double result = function(a, b);
    cout << setprecision(4) << result << endl;
    return 0;
}