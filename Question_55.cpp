#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
void num(int n,vector<int>&v1){
    
    while(n>=1){
        int digit = n%10;
        v1.push_back(digit);
        n = n/10;
    }
    reverse(v1.begin(),v1.end());
    
}
void subset(vector<vector<int>>&sub,vector<int>&v2,int size,vector<int>v1){
    //Base Case//
    if(size >= v1.size()){
        sub.push_back(v2);
    }
    subset(sub,v2,size+1,v1);
    v2.push_back(v1[size]);
    v2.push_back(v1[v1.size()-size]);
    subset(sub,v2,size+1,v1);
}
int main(){
  int n;
  cin>>n;
  vector<int>v1;
  vector<vector<int>>sub;
  vector<int>v2;
  int size = 0;
  subset(sub,v2,size,v1);
   
}