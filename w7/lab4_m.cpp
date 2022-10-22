#include <iostream>

using namespace std;

int a[100][100];

int main(){
    int n;
    cin >> n;

    for(int i = 0; i <= n + 1; i++){
        a[0][i] = 1;
        a[i][0] = 1;
        a[n + 1][i] = 1;
        a[i][n + 1] = 1;
    }
       
    int i_dir[] = {0, 1, 0, -1};
    int j_dir[] = {1, 0, -1, 0};
    int i = 1, j = 1, direction = 0, cnt = 1;

    while(cnt <= n * n){
        a[i][j] = cnt++;

        // Should I move to next direction?
        int next_i = i + i_dir[direction];
        int next_j = j + j_dir[direction];
        if(a[next_i][next_j] != 0){
            direction++; // [0, 1, 2, 3]
            // direction %= 4;
            if(direction == 4)
                direction = 0;
        }

        // Change my main indexes of array
        i += i_dir[direction];
        j += j_dir[direction];
    }


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout.width(3);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}