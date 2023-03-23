#include<iostream>
using namespace std;
bool palindrome(string name){
    int count = 0;
    for(int m=0;m<name.length()/2;m++){
        if(name[m] == name[name.length()-1-m]){
            count++;
        }
    }
    if(count == name.length()){
        return true;
    }
    return false;
}
int main(){
    int t,n,m;
    cin>>t>>n>>m;
    string tow1,tow2;
    cin>>tow1>>tow2;
    string res = tow1;
    while(t--){
   if(palindrome(tow1) == true && palindrome(tow2) == true){
    cout<<"Yes"<<endl;
    break;
   }
   else if(palindrome(tow1) == false && palindrome(tow2) == false){
    cout<<"no"<<endl;
    break;
   }
   else{
    

        
   }
    }
}