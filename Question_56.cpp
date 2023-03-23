#include<iostream>
using namespace std;
//Q)Pass the pillow easy question//
class Solution {
public:
    int passThePillow(int n, int time) {
     int t = 1;
        bool flag = true;
        while(time != 0){
            if(t < n){
                if(flag == true){
                t++;
                }
                if(flag == false){
                    if(t == 1){
                        flag = true;
                        t++;
                    }
                    else{
                        t--;
                    }
                }
            }
            else if(t == n){
                flag = false;
                t--;
            }
            time--;
        }
        return t;
     
    }
};