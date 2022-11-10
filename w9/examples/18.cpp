#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main(){
  // 20BD0001  --- [40, 39, 50, …]
  map<string, vector<int> > m1;

  // 20BD0001  --- [{"PPI": 40}, {“Math": 39}, …]
  map<string, vector< pair<string, int> > > m2;

  return 0;
}