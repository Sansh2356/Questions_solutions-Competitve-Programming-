#include <iostream>
#include <queue>
using namespace std;
//Q)To find height of a  given tree//
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
/*
Space complexity=O(height);
Time complexity=O(n);
Where n is the number of nodes present in a tree//
*/
int main()
{
    node *root = NULL;
}