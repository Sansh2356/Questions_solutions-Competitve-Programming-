#include<string>
#include<iostream>
using namespace std;
//Q)Min_max difference of a given number // 
class Solution {
public:
string min_number(string number){
    string zero = to_string(0);
    char ch = zero[0];
    char element = number[0];
    for(int m=0;m<number.length();m++){
        char character = number[m];
        if(element == character){
                number[m] = ch;
        }

    }
    return number;
}
string max_number(string number){
    string nine = to_string(9);
    char ch = nine[0];
    char element = number[0];
    if(element != '9'){
        for(int m=0;m<number.length();m++){
            char ch2 = number[m];
            if(ch2 == element){
                    number[m] = ch;
            }
        }
    }
    else if(element == '9'){
       for(int x=1;x<number.length();x++){
           char ch2 = number[x];
           if(ch2 != '9'){
               element = ch2;
               break;
           }
       }
       for(int z=0;z<number.length();z++){
           char ch3 = number[z];
           if(ch3 == element){
                number[z] = ch;
           }
       }
    }
    return number;
}
    int minMaxDifference(int number) {
       string number2 = to_string(number);
       string min = min_number(number2);
       string max = max_number(number2);
       int l = stoi(min);
       int e = stoi(max);
       return(e-l);
    }

};