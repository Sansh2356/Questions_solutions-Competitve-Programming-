#include<iostream>
#include<algorithm>
#include<queue>
#include<deque>
#include<vector>
using namespace std;
//Q)Single element in a sorted array//
//Can be solved using bitwise XOR also by running a loop around the whole//
int main(){
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = (left + right) / 2;
            if (mid % 2 == 1) {
                mid--;
            }
            if (nums[mid] != nums[mid + 1]) {
                right = mid;
            } else {
                left = mid + 2;
            }
        }
        return nums[left];
    }
};

}