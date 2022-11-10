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

  
  set<int>::iterator f = s.find(5);
  if(f != s.end())
    cout << "found: " << *f << endl;
  else
    cout << "not found\n";

  return 0;
}