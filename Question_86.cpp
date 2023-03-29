#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
         cin>>a>>b>>c;
        bool flag = true;
        long long ans = -1;
        vector<int>v(3);
        int num1,num2,num3;
        for(long long i=1;i<1e6;i++){
                long long s = i;
                v.push_back((s ^ a));
                v.push_back((s ^ b));
                v.push_back((s ^ c));
                vector<int>v2 = v;
                sort(v.begin(),v.end());
                if(v2 == v){
                    cout<<s<<endl;
                    flag = false;
                    break;
                }
                v.clear();
        }
        if(flag == true){
            cout<<-1<<endl;
        }
    }
}