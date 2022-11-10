#include <iostream>
#include <vector>
#include <set>
#include <map>


using namespace std;

int main(){
  map<char, int> m;
  m['a'] = 1;
  m['b'] = 30;
  m['c'] = 3;
  m['c'] = 30;

  map<char, int>::iterator it = m.begin();

  while(it != m.end()){
    cout << it->first << "-->" << it->second << endl;
    it++;
  }
  

  return 0;
}