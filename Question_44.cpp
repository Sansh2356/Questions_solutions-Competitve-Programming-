#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;
// Q)Converting a given number to binary form//
string convert(int n)
{
    string empty = "";
    while (n >= 1)
    {
        int digit = n % 2;
        n = n / 2;
        string random = to_string(digit);
        empty.push_back(random[0]);
    }
 reverse(empty.begin(),empty.end());
    return empty;
}
int main()
{
    int n;
    cin >> n;
    int ans;
    string ans = convert(n);
    int count=0;
    while(count != 0){
    for(int m=0;m<ans.length();m++){
        char ch = ans[m];
        if((ch == '1' && ans[m-1] == 1) || (ch == '1' && ans[m+1] =='1') ){
                count = count+1;
            //m = m+1;
        }
    }
    }
}