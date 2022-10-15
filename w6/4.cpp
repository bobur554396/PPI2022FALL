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
    
    for(int i = 0; i < last.size(); i++)
        cout << last[i] << " ";

    return 0;
}