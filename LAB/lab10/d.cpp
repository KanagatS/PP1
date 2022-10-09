#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> v;
vector<int> v2;

void outputvector(int n)
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
}

bool cmp(vector<int> v1, vector<int> v2)
{
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < v1.size(); i++)
        sum1 += v1[i];

    for (int i = 0; i < v2.size(); i++)
        sum2 += v2[i];

    if (sum1 > sum2)
        return false;
    
    else
    {
        if (sum1 < sum2)
            return true;

        else
        {
            if (v1.size() > v2.size())
                return false;

            else
            {
                if (v1.size() < v2.size())
                    return true;

                else
                {
                    for (int i = 0; i < v1.size(); i++)
                    {
                        if (v1[i] > v2[i])
                            return false;

                        else if (v1[i] < v2[i])
                            return true;
                    }
                    return true;
                }
            }
        }
    }
}

void inputvector(int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int i = 0; i < x; i++)
        {
            int x1;
            cin >> x1;
            v2.push_back(x1);
        }
        v.push_back(v2);
    }
}

int main()
{
    int n;
    cin >> n;

    inputvector(n);
    sort(v.begin(), v.end(), cmp);
    outputvector(n);

    return 0;
}