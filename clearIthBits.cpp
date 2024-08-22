#include <iostream>
using namespace std;

int clearBits(int num, int i) {
    int bitMask = ~0 << i;
    num = num & bitMask;
    return num;
}

int main(){
    cout << clearBits(15,2);
}