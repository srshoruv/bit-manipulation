#include <iostream>
using namespace std;

int iTheBit (int num, int i) {
    int mask = 1 << i;

    if (!(num & mask)) {
        return 0;
    } else {
        return 1;
    }
}

int main () {
    cout << iTheBit(7,5) << endl;
    cout << iTheBit(8,3) << endl;
}