#include <iostream>
using namespace std;

int setITh(int num, int i) {
    int mask = 1 << i;
    
    return (num | mask);
}

int main (){
    cout << setITh(6,3);
}