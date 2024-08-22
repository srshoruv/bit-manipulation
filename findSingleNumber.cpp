#include <iostream>
#include <vector>
using namespace std;

int find(vector<int> nums) {
    int answer = 0;
    for (int i=0; i<nums.size(); i++) {
        answer ^= nums[i];
    }
    return answer;
}

int main(){
    vector<int> nums = {2,3,2,3,1,6,1};
    cout << find(nums);
}