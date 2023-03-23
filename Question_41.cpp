#include<iostream>
using namespace std;
#include<vector>
#include<stack>
//Q)To find all the divisibility array of a given array//
//SOL-1)Solving by my own intutuion of digits and stoll function but will pass only certain cases and will leave alone the remaing cases throwing an error of overflow
//SOL-2)Can be solved using modular arithmetic by multiplying each value of digit by 10 and then subtracting the ascii value of 0 to get the answer//
class Solution {
public:
    vector<int>output(long long &element,int m,int len){
        string empty = "";
        stack<char>s;
        vector<int>ans;
        while(element>=1){
            int digit = element%10;
            element = element/10;
            string val2 = to_string(digit);
            s.push(val2[0]);
        }
        for(int t=0;t<len;t++){
            empty.push_back(s.top());
            long long val = stoll(empty);
            if(val % m == 0){
                ans.push_back(1);
            }
            else if(val % m != 0){
                ans.push_back(0);
            }
            s.pop();
        }
        return ans;
        
    }
    vector<int> divisibilityArray(string word, int m) {
        long long element = stoll(word);
        return (output(element,m,word.length()));
    }
};