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
    ())(() - no
    */
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(')
            cnt++;
        else {
            // if(cnt == 0) {
            //     cout << "NO\n";
            //     return 0;
            // }
            cnt--;
            if(cnt < 0) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    if(cnt == 0)
        cout << "YES\n";
    else 
        cout << "NO\n";


    return 0;
}