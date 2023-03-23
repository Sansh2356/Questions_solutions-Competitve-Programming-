#include <iostream>
using namespace std;
#include <map>
// Detect loop in a linked list//
// Remove cycle from a linked list//
// Beginning and start of loop//
/*
approach by implementing map


*/
class node
{
public:
    int data;
    node *next;
    node(int f)
    {
        this->data = f;
        this->next = NULL;
    }
};

bool detect(node *&head)
{
    node *temp = head;
    map<node *, bool> visited;
    // The above line means that a map will be created for every node of linked list and corresponding true or false will be marked if true is marked
    // then that node is visited.
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        else
        {
            temp = temp->next;
        }
    }
    return false;
}
//The above solution will have space and time complexity as O(n) as each node is visited once and a map is made storing memory of each node.
//To optimise the space complexity of the above solution we will use floyd's cycle detection algorithm//
int main()
{
}