#include <iostream>
using namespace std;
#include <cmath>;
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
void reverse(node *&head,node*&tail)
{
    node *temp1 = head;
    node *temp2 = head;
    node *temp3 = NULL;
    while (temp1 != NULL)
    {
      
        temp2=temp1->next;
        temp1->next=temp3;
        temp3=temp1;
        temp1=temp2;
    }

    node *temp4 = temp3;
    while (temp4 != NULL)
    {
        cout << temp4->data <<"  ";
        temp4 = temp4->next;
    }
}
int main()
{
    node *node1 = new node(1);
    node *head = node1;
    node *tail = node1;
    insertathead(head, 2);
    insertathead(head, 3);
    insertathead(head, 4);
    insertathead(head, 5);
    print(head);
    cout<<endl;
    reverse(head,tail);
}
