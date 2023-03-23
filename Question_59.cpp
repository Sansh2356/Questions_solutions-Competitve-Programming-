#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main(){
    vector<int>time;
   for(int s=0;s<pow(10,8);s++){
    cin>>time[s];
   }
    int totalTrips=97650;
    vector<int>start;
        for(int m=0;m<time.size();m++){
            start.push_back(0);
        }
        vector<int>end;
        for(int l=0;l<time.size();l++){
            end.push_back(1);
        }
        vector<int>sum;
        for(int r=0;r<time.size();r++){
            sum.push_back(0);
        }
        int count = 0;
        long long t = 1;
        while(count <= totalTrips){
            for(int x=0;x<end.size();x++){
                end[x] = t;
            }
            for(int m=0;m<time.size();m++){
                int diff = abs(start[m]-end[m]);
                if(diff == time[m]){
                    sum[m]=sum[m]+1;
                    start[m] = start[m] + time[m];
                }
            }
            count = 0;
            for(int k=0;k<sum.size();k++){
                count = count + sum[k];
            }
            cout<<count<<endl;
            if(count == totalTrips){
                break;
            }
             if(count > totalTrips){
                cout<<(t-1)<<endl;
            }
            t++;

        }

    cout << t << endl;
     
}