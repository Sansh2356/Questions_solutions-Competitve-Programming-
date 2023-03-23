#include <iostream>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int f)
    {
        this->data = f;
        this->right = NULL;
        this->left = NULL;
    }
};
int heightoftree(node *&root)
{
    // Base case//
    if (root == NULL)
    {
        return 0;
    }
    // Recursive call for traversal to left node of tree//
    int left = heightoftree(root->left);
    // Recursive call for traversal to right node of tree//
    int right = heightoftree(root->right);
    // Maximum height can be either from left branch of subtree or from right branch always return branch with greater nodes//
    // Addition of one is done in order to include the root node//
    int ans = max(left, right) + 1;
    return ans;
}
void inorder(node *root)
{
    inorder(root->left);
    cout << root->data << endl;
    inorder(root->right);
}
void preorder(node *root)
{
    cout << root->data << endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root)
{
    postorder(root->left);
    postorder(root->right);
    cout << root->data << endl;
}
void levelorder(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << endl;
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
          //  q.pop();
            if (q.empty () == 0)
            {
                q.push(NULL);
            }
            else
            {
                break;
            }
        }
        else
        {
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
node *buildtree(node *root)
{
    cout << "Enter data" << endl;
    int data;
    cin >> data;
    root = new node(data);
    // Base case//
    if (data == -1)
    {
        return NULL;
    }
    cout << "Enter data to be inserted at left of:" << root->data << endl;
    root->left = buildtree(root->left);
    cout << "Enter data to be inserted at right of:" << root->data << endl;
    root->right = buildtree(root->right);
    return root;
}

int main()
{
    node *root = NULL;
    // heightoftree(root);
    buildtree(root);
}
