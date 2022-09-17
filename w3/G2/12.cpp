#include <iostream>

using namespace std;

int main(){

    /*
    Your are given list of words (sentences).
    Task: how many words we have there?

    Input: my name is KBTU
    Output: 4
    */

    string line;
    // cin >> line;
    getline(cin, line);

    cout << line.size() << endl;
    cout << line.length() << endl;

    cout << line;
    
    
    return 0;
}