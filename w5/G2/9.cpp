#include <iostream>

using namespace std;

int main(){
    /*
    3 3
    2 7 5
    4 9 1
    8 3 4

    9
    */

    freopen("input.txt", "r", stdin);

    int n, m; 
    cin >> n >> m;
    int a[n][m]; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    int maxi = a[0][0], row_index = 0, column_index = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > maxi){
                maxi = a[i][j];
                row_index = i;
                column_index = j;
            }
        }
    }

    cout << maxi << endl;
    cout << row_index << " " << column_index << endl;



    return 0;
}