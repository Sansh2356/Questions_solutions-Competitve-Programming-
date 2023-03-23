#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node*right;
    node*left;
    node(int f){
        data = f;
        this->left=NULL;
        this->right=NULL;
    }
};
int main(){
node*root = new node(4);
queue<node*>q;
q.push(root);
q.push(NULL);
while(q.size() != true){
    node*curr = q.front();
    cout<<curr<<endl;
    q.pop();
    if(curr == NULL){
        //q.pop();//
        cout<<endl;
        if(q.size() != true){
            q.push(NULL);
        }
    }
    else{
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}
}