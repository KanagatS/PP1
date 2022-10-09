#include <bits/stdc++.h>
using namespace std;

double check(char ch)
{
    if (ch == 'A+')
        return 4.00;
    if (ch == 'A')
        return 3.75;
    if (ch == 'B+')
        return 3.50;
    if (ch == 'B')
        return 3.00;
    if (ch == 'C+')
        return 2.50;
    if (ch == 'C')
        return 2.00;
    if (ch == 'D+')
        return 1.50;
    if (ch == 'D')
        return 1.00;
    if (ch == 'F')
        return 0.00;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string lastname, firstname;
        double gpa = 0;
        double cnt1 = 0;
        int m, cnt_of_credits = 0;
        double GPAfor;
        cin >> lastname >> firstname >> m;
        while (m--)
        {
            char mark;
            int x;
            cin >> mark >> x;
            cnt_of_credits += x;
            GPAfor = check(mark);
            double gpa = GPAfor * x;
            cnt1 += gpa;
        }
        double GPA = cnt1 / cnt_of_credits;



        cout << lastname << " " << firstname << " " << GPA << endl;
    }

    return 0;
}