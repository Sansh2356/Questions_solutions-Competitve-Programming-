#include <iostream>
#include<queue>
using namespace std;
// Q)Zig-zag traversal of a tree//
class node
{
public:
    int data;
    node *right;
    node *left;
    node(int f)
    {
        this->data = f;
        this->left = right = NULL;
    }
};
    node *Buildtree(node *root)
    {
        cout << "Enter a data" << endl;
        int data;
        cin >> data;
        root = new node(data);
        if (data == -1)
        {
            return NULL;
        }
        cout << "Enter data to be inserted at left of:"
             << " " << root->data << endl;
        root->left = Buildtree(root->left);
        cout << "Enter data to be inserted at right of:"
             << " " << root->data << endl;
        root->right = Buildtree(root->right);
        return root;
    }
    void lot(node*&root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
        cout<<temp->data<<endl;
      //  q.pop();
        if(q.front() == NULL ){
            cout<<endl;
            q.pop();
            if(q.empty()){
                break;
            }
            if(!q.empty()){
                q.push(NULL);
            }
        }
            else{
                if(q.front()->left){
                    q.push(root->left);
                }
                if(q.front()->right){
                    q.push(root->right);
                }
                
            }
            q.pop();
        
    }
    void zigzag(node*root){
        
    }
    }
    int main()
    {
        node *root = NULL;
        Buildtree(root);
    }