#include <iostream>

using namespace std;

struct Student {
    string id; // fields
    string name; // properties
    int age; // structure data
    float gpa;
};

int main(){
    /*
    22B123123 Student1 18 4.0
    */
    // int a;
    // a = 2;

    Student s;
    s.id = "22B123123";
    s.name = "Student1";
    s.age = 18;
    s.gpa = 4.0;

    // cout << a << endl;
    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;



    return 0;
}