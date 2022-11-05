#include <iostream>

using namespace std;

int cnt = 0;
void show(){
    // cout << "hello kbtu1\n";
    // cout << "hello kbtu2\n";
    // cout << "hello kbtu3\n";

    cout << cnt << " ";

    if(cnt == 100) // base case
        return;
    
    cnt++;
    show();
}

/*
1) What is recursion - when function calls itself inside it.
2) Base case - case when function must be finished.

Stack overflow - stack for the function is full.

*/
int main(){

    show();

    return 0;
}
