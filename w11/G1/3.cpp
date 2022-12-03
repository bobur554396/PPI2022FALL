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
    Student s;
    cin >> s.id >> s.name >> s.age >> s.gpa;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;



    return 0;
}