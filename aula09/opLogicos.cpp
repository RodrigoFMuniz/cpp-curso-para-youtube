#include <iostream>

using namespace std;

int main(){
    bool a = true;
    bool b = false;
    bool c = true;
    bool d;
    bool e;

    d = a && b;
    cout << d << endl;

    d = a && c;
    cout << d << endl;

    e = a || c;
    cout << e;
    return 0;
}