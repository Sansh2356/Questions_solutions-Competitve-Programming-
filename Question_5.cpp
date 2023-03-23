#include <iostream>
using namespace std;
// Q)To remove duplicates from unsorted linked list//
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
    node *curr = head;
    node *forward = head->next;
    //node*temp=forward;
    // let the first node has a data=1 and 3rd and 4th node also has the data stored as 1//
//     while (curr != NULL)
//     {
        
//         while (forward != NULL)
//         {
//             if (curr->data == forward->data)
//             {
//                 curr->next->next = forward->next;
//             }
//             forward = forward->next;
           
//         }
//         curr = curr->next;
//         forward=curr->next;
//     }
// }
int main()
{
    //4,2,5,4,2,2//
    node*node1=new node(2);
    node*head=node1;
    insertathead(head,2);
    insertathead(head,4);
    insertathead(head,5);
    insertathead(head,2);
    insertathead(head,4);
    print(head);
    cout<<endl;
    removeduplicate(head);
    print(head);
    //4,2,5//
}