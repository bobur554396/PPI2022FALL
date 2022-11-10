#include <iostream>
#include <vector>

using namespace std;

int main(){
  //    - [ ] Infinity given numbers (stop when it - 0)
  /*
  Input:
  3
  4
  10
  7
  6
  9
  0

  Output:
  4 6 10
  */
  int n;
  vector<int> v;
  while(true){
    cout << "Enter the next number ...\n";
    cin >> n;
    if(n == 0)
      break;
    if(n % 2 == 0)
      v.push_back(n);
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << endl;

  
  return 0;
}