#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//Q)Prefix and suffix array//
int main(){
int t;
cin>>t;
while(t--){
   string s;
   int n;
   cin>>n;
   vector<string>s2;
   for(int k=0;k<(2*n-2);k++){
      cin>>s;
      string element = s;
      if(element.length() == n-1){
         s2.push_back(element);
      }      
   }
   reverse(s2[1].begin(),s2[1].end());
   if(s2[0] == s2[1]){
      cout<<"yes"<<endl;
   }
   else{
      cout<<"no"<<endl;
   }

}
}