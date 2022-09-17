#include <iostream>

using namespace std;

int main(){
    for(int i = 0; i < 1000000; i++){
        if(i == 8)
            break;
        
        if(i % 2 == 0)
            continue;
        
        cout << i << " ";
    }
    
    return 0;
}