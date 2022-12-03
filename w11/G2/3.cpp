#include <iostream>

using namespace std;

struct Student {
    string id; // fields of the structure
    string name; // properties of the structure
    int age;
    float gpa;
};


int main(){
    /*
    4
    22B123123 Student1 20 3.8
    22B123124 Student2 21 3.9
    22B123125 Student3 18 4.0
    22B123126 Student4 19 3.5
    */
    int a;
    a = 2;

    Student s;
    s.id = "22B123123";
    s.name = "Student1";
    s.age = 20;
    s.gpa = 3.8;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;


    return 0;
}