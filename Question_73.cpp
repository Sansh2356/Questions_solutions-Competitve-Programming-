#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    //Codeforces div-4 find and replace//
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        int n;
        cin>>n;
        string b;
        cin>>b;
        unordered_map<char,int>m;
        for(int k=0;k<n;k++){
            char ch =b[k];
           if(k%2 == 0){
            if(m.count(ch) == true){
                if(m[ch] != 0){
                   flag = false;
                    break;
                }
            }
            else{
                m[ch] = 0;
            }
           }
           if(k%2 != 0){
            if(m.count(ch) == true){
                if(m[ch] != 1){
                    flag = false;
                    break;
                }
            }
            else{
            m[ch] = 1;
           }
           }
           
        }
        if(flag == false){
            cout<<"no"<<endl;
        }
        else if(flag == true){
            cout<<"yes"<<endl;
        }
    }
}