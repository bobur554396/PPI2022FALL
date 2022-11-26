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


    []
    []
    []
    []
    */
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(')
            st.push('('); // st.push(s[i])
        else {
            if(st.empty()){
                cout << "NO\n";
                return 0;
            }
            st.pop();
        }
    }

    if(st.empty())
        cout << "YES\n";
    else 
        cout << "NO\n";


    return 0;
}