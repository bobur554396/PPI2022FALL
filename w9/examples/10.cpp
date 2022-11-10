#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standard Template Library
  
  // [4][2][-5][10]... <----
  vector<int> v; // dynamic size
  v.push_back(4);
  v.push_back(2);
  v.push_back(-5);
  v.push_back(10);

  v.insert(v.begin() + 1, 20);

  for(int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << endl;
  
  return 0;
}