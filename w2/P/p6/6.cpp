#include <iostream>

using namespace std;

int main(){
    /*
    Your are given three integer numbers: a, b, c - sides of the triangle.
    Task: can we draw such like a triangle?
    yes
    no
    */
    int a, b, c;
    cin >> a >> b >> c;

    // && - and -> * 
    // || - or -> +
    // ! - not -> negative value of something

    // (1 && 1 && 0) => 0
    if(a + b > c && a + c > b && b + c > a){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }


    return 0;
}