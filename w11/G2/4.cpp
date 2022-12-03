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
    3.8 Student1 22B123123 20 
    */
    // int a;
    // cin >> a;

    Student s;
    cin >> s.gpa >> s.name >> s.id >> s.age;

    cout << s.id << " " << s.name << " " << s.age << " " << s.gpa << endl;


    return 0;
}