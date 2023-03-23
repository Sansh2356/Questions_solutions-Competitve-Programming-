#include<iostream>
using namespace std;
int main(){
 /*
 Dynamic programming-:
 1)up-down approach which includes memoization and recursion
 2)bottom-up approach which includes tabulation
 Top down approach includes the creation of dp array that will keep on storing the value of the output for which function has already been called
 we will firstly store all the important data in it and then will return accordingly after checking and directly returnin that
 value rather than calculating again by a recursive call.
 Bottom down approach will include the use of making of an array that will initially store the base cases value and then
a loop will run to store all the other value in that dp array we will have to determin the starting and the ending point of the loop 
 */
/*
Tabulation approach:-
int n;
cin>>n;
vector<int>dp;
dp[0]=0;
dp[1]=1;
for(int m=2;m<=n;m++){
    dp[m] = dp[m-1] + dp[m-2];
}
return dp[n];
*/
/*
Optimization
int prev1=0;
int prev2=1;
for(int m=2;m<=n;m++){
    curr = prev1+prev2;
}
return(prev1);
*/
/*
Recursion + memoization method or top to bottom method.
void solve(int n,vector<int>&dp){
    //Base case//
    if(n<=1){
        return n;
    }
    //Checking for already existing value other than 2;
    if(dp[n] != -1){
        return(dp[n]);
    }
    //Checking for call//
    dp[n] = dp[n-1]+dp[n-2];
    return(dp[n]);
}
int n;
cin>>n;
vector<int>dp;
Creation of dp array and initialization
for(int m=0;m<=;m++){
    dp[m]=-1;
}
solve(n,dp);
*/
  
}