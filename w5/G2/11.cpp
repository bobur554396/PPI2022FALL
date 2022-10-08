#include <iostream>

using namespace std;

int main(){
    /*
    [] - eye(1, 2, 3)
    input:
    3

    output:
    1 2 2
    3 1 2 
    3 3 1
    */
    int n; 
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                a[i][j] = 1;
            } else if(i < j){
                a[i][j] = 2;
            } else if(i > j){
                a[i][j] = 3;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}