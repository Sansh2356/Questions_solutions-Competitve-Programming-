#include <iostream>
#include<vector>
using namespace std;
//Codechef problem divide pages //
int main() {
	// your code goes here //
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int m=0;m<n;m++){
            cin>>v[m];
        }
        int count = 0;
        for(int k=0;k<n;k++){
            int num = v[k];
            if(num % 2 == 0){
                count++;
            }
        }
    int count2 = (n-count);
    if(count == n){
        cout<<"yes"<<endl;
        continue;
    }
    if(count2 % 2 == 0 && count != 0){
            cout<<"yes"<<endl;
    }
    if(count2 % 2 != 0 && count != 0){
        cout<<"no"<<endl;
    }
    if(count2 == n && count2 % 2 ==0){
        cout<<"yes"<<endl;
    }
    if(count2 == n && count2 % 2 != 0){
        cout<<"no"<<endl;
    }
        
    }
	return 0;
}
