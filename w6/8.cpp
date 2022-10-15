#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - front, back
    string line = "hello my name is kbtu";

    cout << line[0] << " " << line[line.size() - 1] << endl;
    cout << line.front() << " " << line.back() << endl;

    return 0;
}