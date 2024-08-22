#include <iostream>
using namespace std;

void fastExpo(int num, int n) {
    int ans = 1;
    while (n > 0) {
        int lastDig = n & 1;
        if(lastDig) {
            ans = ans * num;
        } 
        num = num * num;
        n = n >> 1;
    }   
        cout << ans << endl;
}

int main(){

    fastExpo(2,3);

}