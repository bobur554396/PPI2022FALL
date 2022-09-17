#include <iostream>

using namespace std;

int main(){

    /*
    for(init iterator; condition; inc/dec iterator){
        instruction/expression
    }

    init iterator;
    while(condition){
        instruction/expression

        inc/dec iterator;
    }
    */
    int i = 0;
    while(i < 10){
        cout << i << " ";
        i++;
    }
    
    
    return 0;
}