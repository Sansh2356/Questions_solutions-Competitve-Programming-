#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        vector<vector<int>>sub_arrays;
        for(int m=0;m<nums.size();m++){
            vector<int>element;
            element.push_back(nums[m]);
            sub_arrays.push_back(element);
            for(int x=m+1;x<nums.size();m++){
                int num = nums[x];
                element.push_back(num);
                sub_arrays.push_back(element);
            }
            element.clear();
        }
        return (0);
    }
};
int main(){
    vector<int>input(8);
    for(int g=0;g<8;g++){
        cin>>input[g];
    }
    Solution so;
    so.zeroFilledSubarray(input);
}