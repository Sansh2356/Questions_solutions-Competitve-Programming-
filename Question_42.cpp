#include<vector>
#include<cmath>
using namespace std;
//Q)Left and right sum diffrences of a given array(easy question)//
class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int>leftsum;
        vector<int>rightsum;
        vector<int>ans;
            for(int k=0;k<nums.size();k++){
                int sum = 0;
                for(int t=k-1;t>=0;t--){
                        sum = sum+nums[t];
                    }
                if(leftsum.size() == 0){
                        leftsum.push_back(0);
                }
                else{leftsum.push_back(sum);
                    }
                }
            for(int x=0;x<nums.size();x++){
                int sum2 = 0;
                for(int y=x+1;y<nums.size();y++){
                    sum2 = sum2+nums[y];
                }
            if(x == nums.size()-1){
                    rightsum.push_back(0);
            }
            else{
            rightsum.push_back(sum2);
            }
         }
        for(int m=0;m<nums.size();m++){
            int element = abs(leftsum[m]-rightsum[m]);
            ans.push_back(element);
        }
        return ans;
        }
        
};