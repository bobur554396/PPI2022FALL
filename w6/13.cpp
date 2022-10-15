#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - [ ] substr - sub string
    string line = "hello my kbtu name kbtu is kbtu";
    // string line2 = line.substr(3);
    string line2 = line.substr(3, 10);

    cout << line2 << endl;




    return 0;
}