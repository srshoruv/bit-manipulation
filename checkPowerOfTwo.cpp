#include <iostream>
using namespace std;

bool check(int num) {
    if (!(num & (num -1))) {
        return true;
    }  else {
        return false;
    }
} 

int main(){

    cout << check(8);

}