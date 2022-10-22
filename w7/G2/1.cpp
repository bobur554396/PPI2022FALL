#include <iostream>

using namespace std;

int main(){
    // Built-in function
    // - [ ] tolower, toupper
    string word;
    cin >> word;

    for(int i = 0; i < word.size(); i++){
        // cout << (char)tolower(word[i]);
        cout << (char)toupper(word[i]);
    }

    cout << endl;

    return 0;
}