#include <iostream>

using namespace std;

void f1(int n){
    for(int i = n; i > 0; i--)
        cout << i << " ";
}

void f2(int n){
    if(n == 0) // base case 
        return;

    cout << n << " ";

    f2(n - 1); // calling function itself
}

/*
1) f2(5) -> cout << 5; -> f2(4);
2) f2(4) -> cout << 4; -> f2(3);
3) f2(3) -> cout << 3; -> f2(2);
4) f2(2) -> cout << 2; -> f2(1);
5) f2(1) -> cout << 1; -> f2(0);
6) f2(0) -> base case -> stop the recursion.
*/

int main(){
    int n;
    cin >> n;

    f2(n);


    return 0;
}