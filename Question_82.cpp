#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool is_sorted(vector<int>num){
            vector<int>rand = num;
            sort(rand.begin(),rand.end());
    bool flag = true;
        if(rand == num){
            for(int m=0;m<rand.size();m++){
                if(m == (rand.size())-1){
                    break;
                }
                if(rand[m] == rand[m+1] && rand.size()>=2){
                    flag = false;
                    break;
                }
            }
        }
        else{
            return false;
        }
        if(flag == true){
            return (true);
        }
        return (false); 
    }
    int interval(int number,int s){
        bool flag = true;
        vector<int>primes;
        for(int m = 2;m<number;m++){
            flag = true;
            int num = m;
            for(int k=2;k<num;k++){
                if(num % k == 0){
                    flag = false;
                    break;
                }
            }
            if(flag == false){
                continue;
            }
            else{
                primes.push_back(num);
            }
        }
        for(int u=(primes.size()-1);u>=0;u--){
            int diff = (number-primes[u]);
            if(diff > s){
                return(primes[u]);
            }
        }
        return (0);
    }
    bool primeSubOperation(vector<int>& nums) {
        int prime;
        if(nums.size() == 1){
            return (true);
        }
       for(int x=0;x<nums.size();x++){
       int number= nums[x];
        if(is_sorted(nums) == true){
           return true;
       }
       if(x==0){
                prime = interval(nums[x],0);  
           }
           else{
          prime = interval(nums[x],nums[x-1]);
           }
           nums[x] = (nums[x]-prime);
            if(x == (nums.size()-1)){
                if(is_sorted(nums) == true){
                    return (true);
                }
             }
    }

        return (false);
   }
   
    
};