#include <iostream>

using namespace std;

void show1(){
    cout << "hello kbtu1\n";
    cout << "hello kbtu2\n";
    cout << "hello kbtu3\n";
    return; // stopping the function

    cout << "hello kbtu4\n";
}

void show2(){
    cout << "message from show 2\n"; 

    show1();

    cout << "message from show 2 end part\n"; 
}

int main(){

    show2();

    return 0;
}