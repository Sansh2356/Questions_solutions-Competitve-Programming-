#include<iostream>
#define ll long long
#include<queue>
using namespace std;
//Same problem for the hard version only difffrenec in the varibale datatype that was decide on the basis of the available cosntratints//
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        priority_queue<ll>pq;
        vector<int>v(n);
        for(int s=0;s<n;s++ ){
            cin>>v[s];
        }
        ll power = 0;
        for(ll k=0;k<n;k++){
            ll element = v[k];
            if(element == 0 ){
                if(pq.empty() != true){
                power = power + pq.top();
                pq.pop();
                }
            }
            if(element != 0 ){
                pq.push(element);
            }
        }
        cout<<power<<endl;
    }
}