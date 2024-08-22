#include <iostream>
using namespace std;

void update(int num, int i, int val) {
    num = num & ~(1 << i);
    num = num | (val << i);
    cout << num;
}

int main(){
    update(7,3,0);
    cout << "Hello";
}