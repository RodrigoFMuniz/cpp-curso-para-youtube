#include <iostream>
#include <bitset>

using namespace std;

int main(){
    bool a = true;
    bool b = false;
    bool c = true;
    bool d;
    bool e;
    bitset<8> bit1 = 0b00101001;
    bitset<8> bit2 = 0b00001111;
    bitset<8> res;
    bitset<8> res2;

    d = a && b;
    cout << d << endl;

    d = a && c;
    cout << d << endl;

    e = a || c;
    cout << e << endl;

    res = bit1 | bit2;

    cout << res << endl;

    res2 = bit1 & bit2;

    cout << res2;

    return 0;
}