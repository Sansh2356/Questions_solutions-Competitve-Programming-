#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
//This is not optimized solution it is taking up  worst time complexity of O(N^2) and the space complexity of O(N) for the map
//The optimized solution is with the help of greedy algorithm
int main(){
    class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int,int>m;
        for(int s=0;s<bills.size();s++){
            int num2 = bills[s];
            if(num2 == 5){
                m[5] = m[5] + 1;
                continue;
            }
            else if(num2 == 10){
                if(m[5] < 1){
                    return false;
                }
                else{
                    m[5] = m[5]-1;
                    m[10] = m[10] + 1;
                }
            }
            else{
                if(m[5] >= 1 && m[10] >= 1){
                    m[5] = m[5]-1;
                    m[10] = m[10] -1 ;
                    m[20] = m[20] + 1;
                }
                else if(m[5] >= 3){
                    m[5] = m[5]-3;
                    m[20] = m[20] + 1;
                }
                else{
                    return (false);
                }
            }
        }
        return (true);
    }
};
}