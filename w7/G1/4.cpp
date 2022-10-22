#include <iostream>

using namespace std;

void hello(){
    cout << "hi from void function" << endl;
}

// entry point to the program
int main(){
    cout << "Main function started..." << endl;

    hello(); // calling the function
    hello();
    hello();
    hello();

    cout << "Main function finished..." << endl;
    return 0;
}