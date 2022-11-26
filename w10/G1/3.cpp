#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    // STL 
    /*
    Queue
    |r| <- [5][6][2][]

    */
    queue<int> q;
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(2);

    cout << q.size() << endl;
    cout << q.empty() << endl;

    cout << q.front() << " " << q.back() << endl;

    q.pop();

    cout << q.front() << " " << q.back() << endl;
    
    
    

    return 0;
}