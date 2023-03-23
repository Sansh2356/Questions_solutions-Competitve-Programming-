#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
//Q)Codeforces (div 3) maximum power //
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
        long long power = 0;
        vector<long long>bonus_card;
        for(long long x =0;x<v.size();x++){
            long long element = v[x];
            if(element == 0 && x == 0){
                continue;
            }
            else if(element == 0 && x != 0 && bonus_card.size() > 0){
                power = power + bonus_card[bonus_card.size()-1];
                bonus_card.pop_back();
            }
            else{
                bonus_card.push_back(element);
                sort(bonus_card.begin(),bonus_card.end());
            }
        }
        cout<<power<<endl;

    }
}