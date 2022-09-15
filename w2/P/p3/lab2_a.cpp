#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n; // 0

    if (n == 0) {
        cout << "None\n";
    } else if(n % 2 == 0){
        cout << "Even\n";
    } else if(n % 2 == 1) {
        cout << "Odd" << endl;
    } 



    return 0;
}
