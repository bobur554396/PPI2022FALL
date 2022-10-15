#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - [ ] Is it Palindrome? (yes, no)
    /*
    yes: aba abba abbcbba

    not: apple abc abbd abab

    Solution:
    abccba

    a == a => 0 == n - 1 => n - 1 - 0
    b == b => 1 == n - 2 => n - 1 - 1
    c == c => 2 == n - 3 => n - 1 - 2
    */

    string line;
    cin >> line;

    int n = line.size();
    for(int i = 0; i < n / 2; i++){
        if(line[i] != line[n - 1 - i]){
            cout << "no" << endl;
            return 0;
        }
    }
    cout << "yes" << endl;


    return 0;
}