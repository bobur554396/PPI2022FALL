#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    /*
    ()() - yes
    (()) - yes
    ()()() - yes
    (()()) - yes
    (() - no 
    ())) - no
    ())(() - wrong
    */
    string s;
    cin >> s;
    if(s.size() % 2 == 1) {
        cout << "NO\n";
        return 0;
    }

    int left = 0, right = s.size() - 1;
    while(left < right){
        if(s[left] == s[right] || 
        (s[left] == ')' && s[right] == '(')){
            cout << "NO\n";
            return 0;
        }
        left++;
        right--;
    }

    cout << "YES\n";

    return 0;
}