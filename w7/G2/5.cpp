#include <iostream>

using namespace std;

void hello(){
    cout << "hi from hello function\n";
}

void greeting(string n){
    cout << "hi " << n << "!" << endl;
}

int main(){
    string name;
    cin >> name; // kbtu

    greeting(name); 


    return 0;
}