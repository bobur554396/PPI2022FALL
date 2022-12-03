#include <iostream>
#include <vector>
#include "student.h"
#include "point.h"

using namespace std;

int main(){
    Point p1;
    p1.x = 2;
    p1.y = 3;

    Point p2;
    p2.x = 5;
    p2.y = 6;

    cout << p1.distance(p2) << endl;
    

    return 0;
}
