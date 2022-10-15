#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string line = "hello";
    line.append(" kbtu");
    line.insert(2, "hi");

    cout << line << endl;


    return 0;
}