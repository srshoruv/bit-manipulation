#include <iostream>
using namespace std;

void clearRange(int num, int i, int j) {
    while (j >= i) {
        num = num & (~(1 << j));
        j--;
    } cout << num << endl;
}

void clearRangeNoLoop(int num, int i, int j) {
    int a = ~0 << (j+1);
    int b = (1<<i) - 1;
    int mask = a | b;
    num = num & mask;
    cout << num;
}

int main(){
    clearRange(15,1,3);
    clearRangeNoLoop(15,1,3);
}