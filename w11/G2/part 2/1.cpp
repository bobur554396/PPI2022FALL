#include <iostream>
#include <vector>
#include "student.h"

using namespace std;


int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;
    Student s[n];
    for(int i = 0; i < n; i++){
        s[i].read();
    }

    float f;
    cin >> f;

    filterByGpa(s, n, f);


    return 0;
}