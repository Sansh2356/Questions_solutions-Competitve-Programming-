#include <iostream>
using namespace std;
// Check whether the linked list is circular or not//
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
bool IsCircular(node *&head)
{
    node *temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return false;
    }
    if (temp == head)
    {
        return true;
    }
}
bool CycleExist(node*&head){
//Normal method without using Floyd's algorithm O(n)--O(1)//

}
int main()
{
    node *node1 = new node(1);
    node *head = node1;
    node *tail = node1;
    // Either the loop will end when null pointer will reach or the already visited node will again be visited//
    insertathead(head,7);
    insertathead(head,78);
    insertathead(head,99);
    print(head);
    cout<<endl;
   cout<<IsCircular(head)<<endl;
}
