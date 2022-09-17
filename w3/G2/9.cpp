#include <iostream>

using namespace std;

int main(){
    /*
    continue; break;
    */

    for(int i = 0; i < 100; i++){
        if(i % 2 == 1){
            continue;
        }

        if(i == 6){
            break;
        }
        
        cout << i << " ";

    }

    cout << endl;
    
    return 0;
}