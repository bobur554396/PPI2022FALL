#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - [ ] erase(start_index, count)
    string line = "hello my kbtu name kbtu is kbtu";
    // line.erase(3);
    line.erase(3, 10);

    cout << line << endl;



    return 0;
}