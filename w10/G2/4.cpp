#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    // STL
    // Queue

    /*
    stack:  LIFO - Last in First Out
    
    queue:  FIFO - First in First Out
    |r| <- [4][3][7][][]

    1) add 4
    2) add 3
    3) add 7
    5) execute -> 4
    5) execute -> 3
    
    */
    queue<int> q;
    q.push(4);
    q.push(3);
    q.push(7);


    cout << q.size() << endl;
    cout << q.empty() << endl;
    cout << q.front() << " " << q.back() << endl;
    q.pop();
    cout << q.front() << " " << q.back() << endl;
    

    return 0;
}