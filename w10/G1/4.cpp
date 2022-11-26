#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main(){
    // STL 
    /*
    DeQueue
    |r| <- [5][4][][]

    */
    deque<int> q;
    q.push_back(4);
    q.push_front(5);
    q.push_front(6);
    q.push_back(2);

    cout << q.size() << endl;
    cout << q.empty() << endl;

    cout << q.front() << " " << q.back() << endl;

    q.pop_front();
    q.pop_back();
    q.pop_front();
    // q.pop_back();

    cout << q.front() << " " << q.back() << endl;
    
    
    

    return 0;
}