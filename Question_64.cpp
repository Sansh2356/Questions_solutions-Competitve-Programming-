#include<iostream>
#include<vector>
using namespace std;
void sub(vector<int>v,vector<vector<int>>&v2,int index,vector<int>empty){
    if(index >=v.size()){
        v2.push_back(v);
        return;
    }
    sub(v,v2,index+1,empty);
    empty.push_back(v[index]);
    sub(v,v2,index+1,empty);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int m=0;m<n;m++){
            cin>>v[m];
        }
        vector<vector<int>>v2;
        int index= 0;
        vector<int>empty;
        sub(v,v2,index,empty);
        cout<<(v2.size() % (1000000007))<<endl;
    }
}