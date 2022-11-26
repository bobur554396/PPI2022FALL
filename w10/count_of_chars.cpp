#include <iostream>
#include <map>

using namespace std;

void show(map<char, int> m){
    map<char, int>::iterator it = m.begin();
    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }
    cout << endl;
}

map<char, int> m;
int main(){
    freopen("in2.txt", "r", stdin);
    string s;
    getline(cin, s);

    for(int i = 0; i < s.size(); i++){
        // if(s[i] != ' ')
        m[s[i]]++;
    }

    show(m);

    return 0;
}