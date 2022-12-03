#include <iostream>
#include <vector>
#include "student.h"

using namespace std;


int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;
    vector<Student> v;
    for(int i = 0; i < n; i++){
        Student s;
        s.read();
        v.push_back(s);
    }

    sort(v.begin(), v.end(), sort_by_gpa2);


    for(int i = 0; i < v.size(); i++){
        v[i].show();
    }


    return 0;
}