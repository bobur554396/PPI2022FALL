#include <iostream>

using namespace std;

void f1(int n){
    for(int i = 1; i <= n; i++)
        cout << i << " ";
}

void f2(int n){
    if(n == 0) // base case 
        return;
   
    f2(n - 1);
    cout << n << " ";
}

/*
Stack L = [];
[cout << 1 << " ";]
[cout << 2 << " ";]
[cout << 3 << " ";]
[cout << 4 << " ";]



1) f2(4) -> f2(3)
2) f2(3) -> f2(2)
3) f2(2) -> f2(1)
4) f2(1) -> f2(0)
5) f2(0) -> base case, stop the function
*/
int main(){
    int n;
    cin >> n;

    f2(n);


    return 0;
}

/*
Stack - LIFO

LIFO - Last in First Out

add 4, add 5, add 1
get -> 1
get -> 5

[]
[]
[5]
[4]

*/