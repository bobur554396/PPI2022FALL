#include <iostream>

using namespace std;

struct Student {
    string id; 
    string name;
    int age;
    float gpa;
};

int main(){
    /*
    4
    2 4 5 7

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    */

    /*
    4
    22B123123 Student1 18 4.0
    22B123124 Student2 19 3.7
    22B123126 Student4 20 3.9
    22B123125 Student3 17 3.5
    */
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;
    Student a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].id >> a[i].name >> a[i].age >> a[i].gpa;
    }

    // logic
    
    for(int i = 0; i < n; i++){
        cout << a[i].id << " " << a[i].name << " " << a[i].age << " " << a[i].gpa << endl;
    }
   

    return 0;
}