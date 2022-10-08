#include <iostream>

using namespace std;

int main(){
    /*
    3
    2 7 5
    7 9 1
    5 1 4

    yes
    */

    freopen("input.txt", "r", stdin);

    int n; 
    cin >> n;
    int a[n][n]; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    bool ok = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != a[j][i]){
                ok = false;
            }
        }
    }
    if(ok == true)
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    
    



   


    return 0;
}