#include <iostream>

using namespace std;

int main(){

    int a, b;
    cout << "Enter two integer numbers seperated by spaces...\n";
    cin >> a >> b;
    
    float k;
    cout << "Enter the value K\n";
    cin >> k;
    

    int c = a + b;
    cout << "Result: (a + b) * k = " << k * c << endl;

    return 0;
}