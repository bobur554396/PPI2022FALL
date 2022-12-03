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
    3 4 8 2

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    */
 
    /*
    4
    22B123123 Student1 20 3.8
    22B123124 Student2 21 3.9
    22B123125 Student3 18 4.0
    22B123126 Student4 19 3.5
    */
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int n;
    cin >> n;
    Student s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i].id >> s[i].name >> s[i].age >> s[i].gpa;


    for(int i = 0; i < n; i++)
        cout << s[i].id << " " << s[i].name << " " << s[i].age << " " << s[i].gpa << endl;


    return 0;
}