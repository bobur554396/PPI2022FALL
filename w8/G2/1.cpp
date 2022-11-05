#include <iostream>

using namespace std;

void show(){
    cout << "hello kbtu1\n";
    cout << "hello kbtu2\n";
    cout << "hello kbtu3\n";
    return; // <- manually stop function
    cout << "hello kbtu4\n";
}

int main(){

    show();

    return 0;
}