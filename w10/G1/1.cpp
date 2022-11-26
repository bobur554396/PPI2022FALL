#include <iostream>
#include <stack>

using namespace std;

int main(){
    // STL 
    /*
    Stack
    LIFO - Last in First Out    
    
    1) add 4
    2) add 3
    3) add 6
    4) get data -> 6
    5) get data -> 3

    []
    [6]
    [3]
    [4]
    */
    stack<int> s;
    s.push(4);
    s.push(3);
    s.push(6);

    cout << s.empty() << endl;
    cout << s.size() << endl;

    cout << s.top() << endl; // 6
    cout << s.top() << endl; // 6
    s.pop();
    cout << s.top() << endl; 

    

    return 0;
}