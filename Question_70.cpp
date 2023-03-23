#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
    int n;
    cin>>n;
    string a;
    cin>>a;
     unordered_map<char,int>m;
    int sum = 0;
    for(int k=0;k<n;k++){
        char ch =a[k];
     if(m.count(ch) == false){
        m[ch] = 1;
        sum = sum + 2;
     }
     else{
        m[ch] = m[ch] + 1;
        sum = sum + 1;
     }
    
    }
    cout<<sum<<endl;

 }   
}