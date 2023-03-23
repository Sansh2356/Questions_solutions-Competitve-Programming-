#include<iostream>
#include<climits>
#include<unordered_map>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    unordered_map<int,int>m;
    int n;
    cin>>n;
    vector<int>v(n);
    for(int k=0;k<n;k++){
        cin>>v[k];
    }
    for(int s=0;s<n;s++){
        int element = v[s];
        if(m.count(element) == true){
            m[element] = m[element] + 1;
        }
        else{
            m[element] = 1;
        }
    }
    int maxi = INT_MIN;
    int a;
    for(auto r:m){
        //cout<<r.first<<"::"<<r.second<<endl;
        maxi = max(maxi,r.second);
    }
   cout<<(n-maxi)<<endl;
    
   }
}