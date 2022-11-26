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
    [7]
    [4]
    [5]
    */
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(7);

    while(s.empty() == false){
        cout << s.top() << " ";
        s.pop();
    }

    

    return 0;
}