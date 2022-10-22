#include <iostream>

using namespace std;

int main(){
    // Built-in function
    // - [ ] isalpha, isdigit, isalnum, ispunct
    string word; 
    cin >> word;

    for(int i = 0; i < word.size(); i++){
        // if(isalpha(word[i]) == true)
        // if(isdigit(word[i]))
        // if(isalnum(word[i]))
        if(ispunct(word[i]))
            cout << word[i];
    }

    cout << endl;

    return 0;
}