#include <iostream>
using namespace std;
// Q)Check whether two given trees are identical or not//
class node{
    public:
    int data;
    node*right;
    node*left;
    node(int f){
        this->data=f;
        this->left=right=NULL;
    }
};
class node2{
    public:
    int data;
    node*right;
    node*left;
    node(int f){
        this->data=f;
        this->left=right=NULL;
    }
};
bool isidentical(node *r1, node *r2)
{
    if (r1 == NULL && r2 == NULL)
    {
        return true;
    }
    if (r1 == NULL && r2 != NULL)
    {
        return false;
    }
    if (r2 == NULL && r1 != NULL)
    {
        return false;
    }
    bool left = isidentical(r1->left, r2->left);
    bool right = isidentical(r1->right, r2->right);
    bool value = r1->data == r2->data;
    if (left && right && value == true)
    {
        return true;
    }
}
int main()
{
node*r1=new node(4);
node2*r2=new node(7);
    isidentical(r1,r2);
}