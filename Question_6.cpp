#include <iostream>
using namespace std;
// Q)Sort 0s,1s and 2s in a linked list//
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
void sort(node *&head)
{
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            count1++;
        }
        else if (temp->data == 1)
        {
            count2++;
        }
        else if (temp->data == 2)
        {
            count3++;
        }
        temp = temp->next;
    }
    temp=head;

    while (temp != NULL)
    {
        if (count1 != 0)
        {
            temp->data = 0;
            count1--;
        }
        else if (count2 != 0)
        {
            temp->data = 1;
            count2--;
        }
        else if (count3 != 0)
        {
            temp->data = 2;
            count3--;
        }
        temp = temp->next;
    }
}
int main()
{
    node*node1=new node( 0);
    node*head=node1;
    insertathead(head,1);
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,2);
    print(head);
    sort(head);
    cout<<endl;
    print(head);

}