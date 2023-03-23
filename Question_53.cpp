#include<iostream>
#include<vector>
using namespace std;
//Q)Leetcode all pathe to leaf nodes//
class node{
    public:
    int val;
    node*right;
    node*left;
    node(int f){
        val = f;
        this->right = NULL;
        this->left = NULL;
    }
};
void inorder(node*root,vector<string>&v,string empty){
    //Base Case//
    if(root == NULL){
        return ;
    }
   int number = root->val;
   string element = to_string(number);
   for(int x=0;x<element.size();x++){
    char ch = element[x];
    empty.push_back(ch);
   }
    empty.push_back('-');
    empty.push_back('>');
    inorder(root->left,v,empty);
    inorder(root->right,v,empty);
    if(root->left == NULL && root->right == NULL){
        v.push_back(empty);
    }
    empty.pop_back();
    empty.pop_back();
}
int main(){
    string empty="";
    vector<string>v;
    node*root = NULL;
    inorder(root,v,empty);


    
}