#include<iostream>
using namespace std;
//Q)Minimum number of steps to convert the given number to 0 by adding 2^i or subtracting any power of 2 using the idea of and gates//
int main(){
int n;
cin>>n;
int ans = 0;
while(n>0){
    if(n & 1 != 0){
        n = n/2;
        ans++;
        if(n & 1 != 0){
            n++;
        }
    }
    else{
        n = n/2;
    }
}    
return ans;

}