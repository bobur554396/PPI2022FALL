#include <iostream>
#include <stack>

using namespace std;

int main(){
    // STL
    // Stack

    /*
    LIFO - Last in First Out
    1) add 5
    2) add 4
    3) add 7
    4) read data -> 7
    5) read data -> 4

    []
    []
    []
    []
    [5]
    */
    stack<int> s;
    // s.push(5);
    // s.push(4);
    // s.push(7);

    cout << s.size() << endl;
    cout << s.empty() << endl;

    cout << s.top() << endl;
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;


    return 0;
}