#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ones = n+1;
        string empty ="";
        if(ones == k){
            for(int l=1;l<ones;l++){
                empty.push_back('+');
            }
        }
        else if(ones + k == 0){
            for(int r=0;r<ones;r++){
                empty.push_back('-');
            }
        }
        else if(k > 0 && ones > k){
                empty.push_back('*');
                empty.push_back('-');
                ones = ones - 3;
                if(ones == k){
                    for(int r = 0;r<k;r++){
                            empty.push_back('+');
                    }
                }
                else{
                   cout<<"-1"<<endl;
                   continue;
                }
        }
        else if(k<0 && ones >k){
            empty.push_back('*');
            empty.push_back('-');
            ones = ones-3;
            if(ones = abs(k)){
                    for(int e=0;e<k;e++){
                            empty.push_back('-');
                    }
            }
            else{
                cout<<"-1"<<endl;
                continue;
            }
        }
        cout<<empty<<endl;
    }
}