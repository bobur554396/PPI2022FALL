#include <iostream>
#include <cmath>

using namespace std;

struct Point{
    int x, y;

    float distance(Point p1){
        float dx = x - p1.x;
        float dy = y - p1.y;
        return sqrt(dx * dx + dy * dy);
    }
};