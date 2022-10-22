#include <iostream>

using namespace std;

int main(){
    // - [ ] isalpha, isdigit, isalnum, ispunct
    string line;
    cin >> line;

    for(int i = 0; i < line.size(); i++){
        // if(isalpha(line[i]))
        // if(isdigit(line[i]))
        // if(isalnum(line[i]))
        if(ispunct(line[i]))
            cout << line[i];
    }

    cout << endl;


    return 0;
}