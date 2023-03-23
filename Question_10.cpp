#include <iostream>
#include <cmath>
using namespace std;
//Convert linked list numbers to their decimal form from binary system//
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
int length(node *&head)
{
    node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

int convert(node *&head, int length)
{
    node *temp = head;
    int n = 0;
    while (temp != NULL)
    {
       
        temp->data = temp->data * pow(2, length - n-1);
        n++;
        temp=temp->next;
    }
    print(head);
    temp=head;
            int sum=0;
    while(temp != NULL){
            sum=sum+temp->data;
        temp=temp->next;
    }
return sum;
}

int main()
{
    node *node1 = new node(1);
    node *head = node1;
    insertathead(head, 0);
    insertathead(head, 1);
    insertathead(head,1);
    int length2 = length(head);
    print(head);
    cout<<endl;
    int sum=convert(head,length2);
    cout<<endl;
    cout<<sum;
   
}