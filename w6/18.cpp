#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main(){
    stringstream ss;

    string num = "100";
    ss << num << "hello" << " 2.5"; 
    int a;
    string word;
    float f;

    ss >> a >> word >> f;

    cout << a + 2 << endl;
    cout << word << endl;
    cout << f * 2 << endl;

    // cin >> a >> word >> f;


    return 0;
}