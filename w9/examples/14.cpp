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

  
  set<int>::reverse_iterator it = s.rbegin();
  while(it != s.rend()){
    cout << *it << " ";
    it++;
  }

  return 0;
}