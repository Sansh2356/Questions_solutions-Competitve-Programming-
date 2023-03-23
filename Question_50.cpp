#include <bits/stdc++.h>
using namespace std;
//Q)Codechef starters 79 (Distinct end sums)//
//Solve using the idea of the sum should be arranged from lowest to highest manner//
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>A(n);
	    int i = 0,j = n-1;
	    int start = n;
	    while(i<j){
	        A[i] =start;
	        start--;
	        A[j] = start;
	        start--;
	        j--;
	        i++;
	    }
	    for(auto&x:A)cout<<x<<" ";
	    cout<<"\n";
	}
	return 0;
}
