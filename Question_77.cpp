#include<unordered_map>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<int,int>m;
        int n;
        cin>>n;
        vector<int>v(n);
        for(int s=0;s<n;s++){
            cin>>v[s];
        }
        for(int y=0;y<n;y++){
            int num = v[y];
            if(m.count(num) == true){
                m[num] = m[num] + 1;
            }
            else{
                m[num] = 1;
            }
        }
        int min = INT_MIN;
        for(auto i:m){
            min = max(min,i.second);
        }
        int min2 = m[min];
        int count = 0;
        for(int l=0;l<n;l++){
            int num3 = v[l];
            if(num3 != min2){
                count++;
            }
        }
        cout<<count<<endl;
    
        
    }
}