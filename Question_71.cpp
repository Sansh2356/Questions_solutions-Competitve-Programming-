#include<iostream>
#include<vector>
#include<unordered_map>
//Q)Group of anagrams O(N^2)solution//
using namespace std;
int main(){
    class Solution {
public:
bool is_anagram(string s,string t){
    if(s.length() != t.length()){
            return false;
        }
        int arr[26] = {0};
        for(int i=0; i<s.length(); i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
         unordered_map<string,int>m2;
        if(strs.size() == 1){
            ans.push_back(strs);
            return (ans);
        }
        else{
        for(int m=0;m<strs.size();m++){
                string empty = strs[m];
                 vector<string>v2;
                   if(m2.count(empty) == false){ 
                       v2.push_back(empty);
                        }
                        if(m2.count(empty) == true){
                            continue;
                        }
                    for(int t=m+1;t<strs.size();t++){
                            string b = strs[t];
                               bool val =  is_anagram(empty,b);
                                if(val == true){
                                        if(m2.count(b) == false){
                                            v2.push_back(b);
                                            m2[b] = 1;
                                        }
                                        else{
                                           v2.push_back(b);
                                        }
                                        
                                }
                               
                    }
                     ans.push_back(v2);
        }
            

        }
        return (ans);
    }
};
}
/*
class Solution {
public:
O(N) solution
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;
        if(strs.size() == 1){
            ans.push_back(strs);
            return (ans);
        }
        else{
            for(int k=0;k<strs.size();k++){
                string b = strs[k];
                sort(b.begin(),b.end());
                m[b].push_back(strs[k]);
            }
        }
        for(auto i:m){
            ans.push_back(i.second);
        }
        return (ans);
    }
};

*/