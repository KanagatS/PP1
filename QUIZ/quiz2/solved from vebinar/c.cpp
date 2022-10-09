#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];

  int cnt_used[1001];
  for (int i = 0; i < 1001; i++)
    cnt_used[i] = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    int id = a[i];
    cnt_used[id]++;
  }

  int mx = 0;

  for (int i = 1; i <= 1000; i++)
    if (mx < cnt_used[i])
      mx = cnt_used[i];

  for (int i = 1000; i > 0; i--)
    if (cnt_used[i] == mx)
      cout << i << " ";
}
