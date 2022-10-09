#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n];
  bool used[101];
  for (int i = 0; i < 101; i++)
    used[i] = false;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    int id = a[i];
    used[id] = true; //1 = true
                     //0 = false
  }
  
  int mn, mx = 0; //mn = min, mx = max
  
  
  for (int i = 0; i < 101; i++)
  {
    if (used[i] == true)
    {
      mn = i;
      break;
    }
  }
  
  for (int i = 0; i < 101; i++)
    if (used[i] == true)
      mx = i;
  
  int ans = 0;
  
  for (int i = mn; i < mx; i++)
    if (used[i] == false)
      ans++;
  cout << ans;
}
