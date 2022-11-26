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
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop_front();
    }

    


    return 0;
}