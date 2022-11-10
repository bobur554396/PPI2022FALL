#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

void show(map<string, int> m){
  map<string, int>::iterator it = m.begin();
  while(it != m.end()){
    cout << it->first << " --> " << it->second << endl;
    it++;
  }
}

pair<string, int> findMaxPoint(map<string, int> m){
  map<string, int>::iterator it = m.begin();
  pair<string, int> winner(it->first, it->second);
  while(it != m.end()){
    if(it->second > winner.second){
      winner.first = it->first;
      winner.second = it->second;
    }
    it++;
  }
  return winner;
}

int main(){
  map<string, int> m;
  m["Student 1"] = 4;
  m["Student 2"] = 3;
  m["Student 3"] = 10;
  m["Student 4"] = 7;

  pair<string, int> winner = findMaxPoint(m);

  cout << "Winner is:\n";
  cout << winner.first << "--->" << winner.second << endl;

  cout << endl;
  show(m); 
  

  return 0;
}