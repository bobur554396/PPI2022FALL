#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    // - begin, end
    string line = "hello my name is kbtu";

    cout << *line.begin() << " " << *(line.end() - 1) << endl;

    sort(line.begin(), line.end());

    cout << line << endl;
    // space == 32
    // a == 97
    return 0;
}