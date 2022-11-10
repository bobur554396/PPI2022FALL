#include <iostream>
#include <vector>

using namespace std;

int main(){
  // STL - Standard Template Library
  int a[] = {2, 3, 5, -4}; // static size

  // cout << *(a + 0)<< endl; // a[0]
  // cout << *(a + 1) << endl; // a[1]
  // cout << *(a + 2) << endl; // a[2]
  // cout << *(a + 3) << endl; // a[3]
  

  // [4][2][-5][10][].. <----
  vector<int> v; // dynamic size
  v.push_back(4);
  v.push_back(2);
  v.push_back(-5);
  v.push_back(10);

  cout << *v.begin() << endl;
  cout << *(v.begin() + 1) << endl;
  cout << *(v.begin() + 2) << endl;
  cout << *(v.begin() + 3) << endl;
  cout << *(v.end() - 1) << endl;


  return 0;
}