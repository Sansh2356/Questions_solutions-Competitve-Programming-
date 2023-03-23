#include<iostream>
using namespace std;
#include<algorithm>
//Q)Split the given digit in 2 possible sub numbers such that minimum sum is obtained//
/*
Using the idea of sorting the digits and alternatively forming the num1 and num2 and then it will always 
give us the minimum sum.
*/
class Solution {
public:
int solve(string empty){
    sort(empty.begin(),empty.end());
    string num1,num2;
    int len = empty.length();
    for(int m=0;m<empty.size();m++){
        char ch = empty[m];
        if(m % 2 == 0){
            num1.push_back(ch);
        }
        else if(m % 2 != 0){
            num2.push_back(ch);
        }
    }
    int ans = (stoi(num1)+stoi(num2));
    return ans;

   
}
    int splitNum(int num) {
        return(solve(to_string(num)));
        
    }
};