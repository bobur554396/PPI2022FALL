#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){

  set<int> s;
  s.insert(3); 
  s.insert(10); 
  s.insert(2); 
  s.insert(5); 
  s.insert(10); 
  s.insert(3);
  s.insert(1);

  // s.clear();

  cout << s.empty() << endl;

  cout << s.size() << endl;
  set<int>::iterator it = s.begin();
  while(it != s.end()){
    cout << *it << " ";
    it++;
  }
  
  return 0;
}