#include <iostream>

using namespace std;

void hello(){
    cout << "hi from hello function\n";
}

void greeting(string fname, string lname){
    cout << "hi " << fname << " " << lname << "!" << endl;
}

int main(){
    string f_name, l_name; // local variable
    cin >> f_name >> l_name; // kbtu

    greeting(f_name, l_name); 


    return 0;
}