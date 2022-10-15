#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - [ ] Is it Palindrome? (yes, no)
    /*
    yes: aba abba abbcbba

    not: apple abc abbd abab

    Solution:
1)    abccba
      l    r    

2)    abccba
       l  r    

3)    abccba
        lr    


    */
    string line;
    cin >> line;

    int left = 0, right = line.size() - 1;
    while(left < right){
        if(line[left] != line[right]){
            cout << "no" << endl;
            return 0;
        }
        left++;
        right--;
    }
 
    cout << "yes" << endl;


    return 0;
}