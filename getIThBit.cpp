#include <iostream>
using namespace std;

int iThBit (int num, int i) {
    int mask = 1 << i;

    if (!(num & mask)) {
        return 0;
    } else {
        return 1;
    }
}

int main () {
    cout << iThBit(7,5) << endl;
    cout << iThBit(8,3) << endl;
}