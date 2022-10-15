#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // String - number of chars/symbols/...
    string word = "hello"; 
    string word1("kbtu");

    string last = word + " " + word1;
    cout << last << endl;

    cout << last.size() << " " << last.length() << endl;
    

    return 0;
}