#include <iostream>

using namespace std;

int main(){
    bool a = true;
    bool b = false;
    bool c = true;
    bool d;

    d = a && b;
    cout << d << endl;

    d = a && c;

    cout << d;
    return 0;
}