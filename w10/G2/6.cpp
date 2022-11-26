#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
    // STL
    // Queue

    /*
    |r| <- [2][3][4][5][][][]
    
    */
    deque<int> q;
    q.push_back(4);
    q.push_back(5);
    q.push_front(3);
    q.push_front(2);


    cout << q.size() << endl;
    cout << q.front() << " " << q.back() << endl;
    q.pop_front();
    q.pop_back();
    cout << q.front() << " " << q.back() << endl;

    


    return 0;
}