#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    // STL
    // De Queue -> Double eneded Queue

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


    while(q.empty() == false){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}