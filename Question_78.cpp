#include<iostream>
#include<vector>
using namespace std;
#include<unordered_map>
//Q)Codechef div-4 make A-B same//
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int l=0;l<n;l++){
            cin>>a[l];
        }
        for(int y=0;y<n;y++){
            cin>>b[y];
        }
        unordered_map<int,long long>m;
         for(int j=0;j<n;j++){
             if(m.count(a[j]) == true){
                 m[a[j]] = m[a[j]] + 1;
             }
             else{
                 m[a[j]] = 1;
           }
         }
         bool ans = true;
         if(a[0] != b[0] || a[n-1] != b[n-1]){
                    cout<<"no"<<endl;
                   continue;
         }
         long long num_zeroes = 0;
            long long num_ones = 0;
            
        for(int i=0;i<n;i++){
            int num1 = a[i];
            int num2 = b[i];
           if(num1 == 0){
            num_zeroes++;
           }
           if(num1 == 1){
            num_ones++;
           }
            if(  (i==0) || (i==(n-1))){
                continue;
            }
            if(num1 == num2){
                    continue;
            }
            else if(num1 != num2){
                    if(num1 == 0){
                        if((m[1] - num_ones) <= 0 && num_ones <= 0){
                            ans = false;
                            break;

                        }
}
                    }
                    if(num1 == 1){
                        ans = false;
                        break;
                    }
            }
            if(ans == false){
                cout<<"no"<<endl;
            }
            else if(ans == true){
                cout<<"yes"<<endl;
            }

        }
    }
