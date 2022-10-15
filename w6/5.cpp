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

    string last2 = last;
    // last2 += "pp1";

    cout << (last == last2) << endl;

    // for(int i = 0; i < last2.size(); i++)
    //     cout << last2[i] << " ";

    return 0;
}