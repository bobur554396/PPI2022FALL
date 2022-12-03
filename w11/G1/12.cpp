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
    string name;
    cin >> name;

    searchByName2(v, name);


    return 0;
}
