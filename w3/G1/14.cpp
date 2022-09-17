#include <iostream>

using namespace std;

int main(){
    /*
    You are given list of words (sentences).
    Task: count number of words

    Input: My name is KBTU.
    Outpu: 4
    */
    string line;
    // cin >> line;

    getline(cin, line);

    cout << line.size() << endl;
    cout << line.length() << endl;

    cout << line << endl;

    return 0;
}