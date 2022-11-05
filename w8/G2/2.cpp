#include <iostream>

using namespace std;

void show(){
    cout << "hello kbtu1\n";
    cout << "hello kbtu2\n";
    cout << "hello kbtu3\n";

    return; // <- manually stop function
    cout << "hello kbtu4\n";
}

void show2(){
    cout << "message from show 2 function\n";

    show();

    cout << "show 2 function: last line1\n";
    cout << "show 2 function: last line2\n";
}

/*
Stack - vertical box to store data
LIFO - Last in First Out

add 3, add 6, add 4
get -> 4, get -> 6, get -> 3

[]
[]
[]
[3]
*/

/*
L1 - main function stack
[]
[]
[cout << "end of main function\n";]

L2 - show2 function's stack
[]
[]
[cout << "show 2 function: last line1\n"; cout << "show 2 function: last line2\n";]
*/
int main(){

    show2();

    cout << "end of main function\n";

    return 0;
}