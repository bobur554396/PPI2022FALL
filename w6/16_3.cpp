#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - [ ] Is it Palindrome? (yes, no)
    /*
    yes: aba abba abbcbba

    not: apple abc abbd abab

    hello -> reverse -> olleh
    abba -> reverse -> abba
    */
    string line;
    cin >> line;

    string line2 = line;
    reverse(line2.begin(), line2.end());

    if(line == line2)
        cout << "yes" << endl;
    else
        cout << "no" << endl;


    return 0;
}