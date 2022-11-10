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

  // v.clear();
  // cout << v.empty() << endl;

  
  // cout << v.size() << endl;
  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  return 0;
}