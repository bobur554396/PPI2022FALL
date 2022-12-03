#include <iostream>
#include <vector>
#include "student.h"

using namespace std;


int sum(int a, int b = 10){
    return a + b;
}

int f(int a, int b, int (*func)(int, int)){
    return func(a, b);
}

int main(){

    cout << sum(2, 3) << endl;
    cout << f(2, 3, sum);

    return 0;
}