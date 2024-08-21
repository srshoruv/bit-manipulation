#include <iostream>
using namespace std;

void oddOrEven(int num) {
    if (!(num & 1)) {
        cout << num << " is an EVEN number!" << endl;
    } else {
        cout << num << " is an ODD number!" << endl;
    }
}

int main (){
    oddOrEven(7);
    oddOrEven(8);
}