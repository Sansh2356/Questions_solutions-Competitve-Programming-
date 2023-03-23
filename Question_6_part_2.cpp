#include <iostream>
using namespace std;
// Q)Sort 0s,1s and 2s in a linked list//
//Chutya hun mai //
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
void insertAttail(node *&tail, node *data)
{
    tail->next = data;
    tail = data;
}
void sort(node *head)
{
    // Making of 3 dummy nodes//
    node *onehead = new node(-1);
    node *onetail = onehead;
    node *twohead = new node(-2);
    node *twotail = twohead;
    node *threehead = new node(-3);
    node *threetail = threehead;
    node *temp = head;
    // Call for making seperate 3 linked lists for 0,1 and 2//
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            insertAttail(onetail, temp);
        }
        else if (temp->data == 1)
        {
            insertAttail(twotail, temp);
        }
        else if (temp->data == 2)
        {
            insertAttail(threetail, temp);
        }
    }
    // Merging of 3 linked lists//
    if (twohead->next != NULL)
    {
        onetail->next = twohead->next;
        twotail->next = threehead->next;
        threetail->next = NULL;
    }
    else
    {
        onetail->next = threehead->next;
        threetail->next = NULL;
    }
    delete onehead;
    delete twohead;
    delete threehead;
    delete onetail;
    delete twotail;
    delete threetail;
}
int main()
{
}