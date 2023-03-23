#include<iostream>
using namespace std;
#include<vector>
#include<unordered_map>
//Q)Is it a cat(codeforces div 3 contest)//
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string name;
    cin>>name;
    int count=0;
    if(name[0] != 'm' && name[0] != 'M'){
        cout<<"no"<<endl;
        continue;
    }
    for(int m=0;m<name.length();m++){
        char ch = name[m];
        if(ch == 'm' || ch == 'M'){
            count++;
        }
        else{
            break;
        }
    }
        if(name[count] != 'e' && name[count] != 'E'){
        cout<<"no"<<endl;
        continue;
    }
       for(int k=count;k<name.length();k++){
        char ch = name[k];
        if(ch == 'e' || ch == 'E'){
            count++;
        }
        else{
            break;
        }
    }
    if(name[count] != 'o' && name[count] != 'O'){
        cout<<"no"<<endl;
        continue;
    }
     for(int u=count;u<name.length();u++){
        char ch = name[u];
        if(ch == 'o' || ch == 'O'){
            count++;
        }
        else{
            break;
        }
    }
         for(int z=count;z<name.length();z++){
        char ch = name[z];
        if(ch == 'w' || ch == 'W'){
            count++;
        }
        else{
            break;
        }
    }
   // cout<<count<<endl;
    if(count != name.length()){
        cout<<"no"<<endl;
        continue;
    }
    else if(count == name.length()){
        if(name[count-1] == 'w'||name[count-1] =='W'){
        cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    
}
}