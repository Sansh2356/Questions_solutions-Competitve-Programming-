#include <iostream>
#include <queue>
#include <math.h>
#include <sstream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(9);
    v.push_back(9);
    v.push_back(9);
   v.push_back(9);
    int carry = 1;
    int t = v.size() - 1;
    while (t >= 0)
    {
        int num = v[t];
        if (num == 9 && t != 0 && carry == 1)
        {
            v[t] = 0;
            
        }
         else if(carry == 1 && num == 9 && t ==0){
             vector<int>ans;
             ans.push_back('1');
             ans.push_back('0');
             
             for(int m=0;m<v.size();m++){
                ans.push_back(v[m]);
             }
            
         }
        else{
            v[t] = carry + v[t];
            carry = 0;
        }
        t--;
    }
     for(int m=0;m<v.size();m++){
         cout<<v[m];
    }
}