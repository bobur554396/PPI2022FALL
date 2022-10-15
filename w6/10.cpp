#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - [ ] find function
    string line = "hello my name is kbtu";
    string target = "my";
    
    int found = line.find(target);
    if(found != -1)
        cout << "found: " << found << endl;
    else
        cout << "not found" << endl;


    return 0;
}