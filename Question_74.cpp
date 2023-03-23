#include<iostream>
#include<vector>
using namespace std;
//Codeforces div 4 odd queries //
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<int>v(n);
        vector<int>pref;
        for(int m=0;m<n;m++){
            cin>>v[m];
        if(m == 0){
            pref.push_back(v[m]);
        }
        else{
        pref.push_back(pref[m-1]+v[m]);
        }
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            long long ans =pref[n-1]-(pref[r]-pref[l-1])+k*(r-l+1);
    if(ans % 2 == 0){
        cout<<"no"<<endl;
    }
    else{
        cout<<"yes"<<endl;
    }
            
        }
        
       
    }
}