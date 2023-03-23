#include <iostream>
using namespace std;
#include <queue>
class node
{
public:
    int data;
    node *right;
    node *left;
    node(int f)
    {
        this->data = f;
        this->right = NULL;
        this->left = NULL;
    }
};
int heightoftree(node *root)
{

    // Base case//
    if (root == NULL)
    {
        return 0;
    }
    // Traverse through left side of tree to find height through left tree//
    int left = heightoftree(root->left);
    // Traverse through right side of tree to find height through right tree//
    int right = heightoftree(root->right);
    int ans = max(left, right);
    return ans + 1;
}
int diameter(node *root)
{
    // BASE CASE//
    if (root == NULL)
    {
        return 0;
    }
    int opt1 = diameter(root->left);
    int opt2 = diameter(root->right);
    int opt3 = heightoftree(root->left) + heightoftree(root->right) + 1;
    int ans1 = max(opt1, opt2);
    int actualans = max(ans1, opt3);
    return actualans;
}
int main()
{
}