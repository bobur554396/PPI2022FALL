#include <iostream>

using namespace std;

int main(){
    /*
    Your are given one integer number N;
    Print out "odd" if the number N is odd, else "even".
    
    Input: 4
    Output: even

    Input: 3
    Output: odd
    */
    int n;
    cin >> n;

    // 4 % 2 = 0, 10 % 2 = 0, 6 % 2 = 0  
    // 3 % 2 = 1, 5 % 2 = 1, 7 % 2 = 1

    if(n % 2 == 0){
        cout << "even\n";
    } else {
        cout << "odd\n";
    }

    // if (n % 2 == 1){
    //     cout << "odd\n";
    // }
    

    return 0;
}