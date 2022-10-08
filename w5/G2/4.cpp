#include <iostream>

using namespace std;

int main(){
    // Nested loop

    for(int i = 0; i < 4; i++){
        cout << "i = " << i << endl;
        for(int j = 0; j < 10; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;


    return 0;
}