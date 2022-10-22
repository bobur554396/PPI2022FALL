#include <iostream>

using namespace std;

void greeting(string _fname, string _lname){ // declaring the function
    cout << "Hi " << _fname << " " << _lname << "!" << endl;
}

int main(){
    string f_name, l_name; // local variable
    cin >> f_name >> l_name;

    greeting(f_name, l_name);


    return 0;
}