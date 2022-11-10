#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standard Template Library
  int a[] = {2, 3, 5, -4}; // static size
  
  // [4][2][-5][10]... <----
  vector<int> v; // dynamic size
  v.push_back(4);
  v.push_back(2);
  v.push_back(-5);
  v.push_back(10);


  // cout << v[100] << endl;
  // cout << v.at(100) << endl;

  cout << v.size() << endl;
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
    // cout << v.at(i) << " ";
  // cout << v[0] << endl;
  // cout << v[1] << endl;

  return 0;
}