#include <iostream>
using namespace std;

int main(){
  int n; cin >> n;
  int a[n][n];
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++)
      cin >> a[i][j];
  }
  bool used[n][n];
  for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < n ; j++)
      used[i][j] = false;
  }
  for(int i = 0 ; i < n ; i++){
    for(int j = n-1; j >=0; j--){
      if(used[i][j] == false){
        int id = i, jd = j;
        while(id != n && jd != n){
          cout << a[id][jd] << " ";
          used[id][jd] = true;
          id++;
          jd++;
        }
        cout << endl;
      }
    }
  }
}
