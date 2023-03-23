#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;
    node(int f)
    {
        data = f;
        this->right = NULL;
        this->left = NULL;
    }
};
node *buildtree(node *&root, int val)
{
    // Firstly we will require a data to make a new node//
    root = new node(val);
    cout << "Enter the data to be entered in left of" << root->left << endl;
    int leftdata;
    cin >> leftdata;
    root->left = buildtree(root->left, leftdata);
    cout << "Enter the data to be eneterd at right of" << root->right << endl;
    int rightdata;
    cin >> rightdata;
    root->right = buildtree(root->right, rightdata);
}
int main()
{
    node *root = NULL;
    
    int data;
    buildtree(root, data);
}