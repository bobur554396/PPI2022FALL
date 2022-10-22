#include <iostream>

using namespace std;

int main(){
    // - [ ] Built-in functions
    // - [ ] tolower, toupper
    string line;
    cin >> line;

    for(int i = 0; i < line.size(); i++){
        // cout << (char)tolower(line[i]);
        cout << (char)toupper(line[i]);
    }

    cout << endl;


    return 0;
}