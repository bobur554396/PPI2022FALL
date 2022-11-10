#include <iostream>
#include <vector>

using namespace std;

int main(){
  // - [ ] Given N and N elements 
  /*
  4
  1 2 3 4
  */

  // Reading part
  int n, a;
  cin >> n;

  vector<int> v;
  for(int i = 0; i < n; i++){
    cin >> a;
    v.push_back(a);
  }

  // Solution part

  // Output part
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
  
  cout << endl;

  
  return 0;
}