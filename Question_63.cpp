#include<iostream>
#define ll long long
#define MOD 10000000007
#define SIZE 1e6+2
#define endl "\n"
using namespace std;
//Q)Prefix Permutation//
void solve(){
    ll n;
    cin>>n;
    if(n%2){
        cout<<-1<<endl;
        return;
    }
    for(ll i=1;i<=n;i+=2)cout<<(i+1)<<" "<<i<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}