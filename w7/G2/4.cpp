#include <iostream>

using namespace std;

void hello(){
    cout << "hi from hello function\n";
    cout << "hi from hello function\n";
    cout << "hi from hello function\n";
    cout << "hi from hello function\n";
}

int main(){
    cout << "Main function started..." << endl;

    hello(); // calling of the function

    cout << "Main function finished..." << endl;
    return 0;
}