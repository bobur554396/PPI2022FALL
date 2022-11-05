#include <iostream>

using namespace std;

int cnt = 0;
void show(){
    // cout << "hello kbtu1\n";
    // cout << "hello kbtu2\n";
    // cout << "hello kbtu3\n";

    // cout << cnt++ << endl;
    cout << cnt << endl;

    cnt += 3;

    if(cnt == 999) // base case
        return;
    show();
}

/*
    1) What is recursion? - is function which will call itself inside it.
    2) Base case - it is a case when your function must be finished.

    Stack overflow - data inside of the stack goes out of memory. 

    []
    []
    []
    []
*/


int main(){

    show();

    return 0;
}