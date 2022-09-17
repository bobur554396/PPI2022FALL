#include <iostream>

using namespace std;

int main(){
    // Infinity loop

    // continue; break;

    int n = 0;
    for( ; ; ){
        n++;

        if(n == 100)
            break;


        if(n % 4 == 0)
            continue;



        cout << n << "  ";

    }
    
    return 0;
}