#include <iostream>
using namespace std;

int count(int num){
    int count = 0;
    while (num > 0) {
        int lastDig = num & 1;
        count += lastDig;
        num = num >> 1;
    }
    return count;
}

int main(){
    cout << count(12);
}