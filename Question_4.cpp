#include <iostream>
using namespace std;
// Q)To remove duplicates from a sorted  linked list//
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
void insertathead(node *&head, int d)
{
    node *newnode = new node(d);
    newnode->next = head;
    head = newnode;
}
void insertatmid(node *&head, int f, int s)
{
    if (s == 1)
    {
        insertathead(head, f);
    }
    node *temp = head;
    int count = 0;
    while (count < s - 1)
    {
        temp = temp->next;
        count++;
    }
    node *newnode = new node(f);
    newnode->next = temp->next;
    temp->next = newnode;
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
}
void removeduplicate(node *&head)
{
    //The below code is accurate for sorted linked list but in case of unsorted the code will be different//
     node *curr = head;
     node *forward = head->next;
     while (curr != NULL && forward != NULL)
     {
         if (forward->data == curr->data && forward->next != NULL && curr->next != NULL)
         {
             curr->next = forward->next;
         }
         curr = curr->next;
         forward = forward->next;
     }
}
int main()
{
    node *node1 = new node(3);
    node *head = node1;
    node *tail = node1;
    insertathead(head, 2);
    // print(head);
    // cout<<endl;
    insertathead(head, 2);
    insertathead(head, 2);
    print(head);
    cout<<endl;
    removeduplicate(head);
    print(head);
   
}