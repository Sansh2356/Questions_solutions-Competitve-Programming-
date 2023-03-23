#include <iostream>
using namespace std;
// Q)To find the cycle in a linked list by floyd's algorithm//
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
bool floyddetect(node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        // If the below line is not applied then it will give us a segmentation fault if fast->next==null.
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
bool node(node &head)
{
    if (head == null)
    {
        return NULL;
    }
    node *slow = head;
    node *intersection = floyddetect(head);

    while ()
    {
        slow = slow->next;
        intersection = intersection->next;

        if (slow == intersection)
        {
            return slow;
        }
    }
    return false;
}
// Reduces the complexity to O(n);

void removeloop(node *&head)
{
    node *headofloop = node(head);
    while (headofloop->next != headofloop)
    {
        headofloop = headofloop->next;
    }
    headofloop->next = null;
}
int main()
{
}