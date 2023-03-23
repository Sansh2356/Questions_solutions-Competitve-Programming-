#include<iostream>
#include<cmath>
using namespace std;
//Q)Append for OR (codechef)//
int main(){
	int t;
	cin>>t;
	int ans = -1;
	while(t--){
	    int n,y;
	    cin>>n>>y;
	    int arr[n];
	    int ans3 = -1;
	    int ans1 = 0;
	    for(int k=0;k<n;k++){
	        cin>>arr[k];
	        ans1 = ans1 | arr[k];
	    }
	    for(int r=0;r<32;r++){
	        int ans2 = r|ans1;
	        if( ans2 == y){
	            ans3 = r;
	            cout<<ans3<<endl;
	            break;
	        }
	    }
	    if(ans3 != -1){
	        cout<<ans3<<endl;
	    }
	 
	}
}