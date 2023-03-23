#include <iostream>
using namespace std;
// Q)Merge two linked list//
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
/*
void solve(node*head1,node*head2){
    node*curr1=head1;
    node*curr2=head2;
    node*next1=head1->next;
    node*next2=head2->next;
    swhile(next1 !=null && curr2 != null){
    if(curr1->data=<curr2-data<=next1->data){
        curr1->next=curr2;
        next2=head2->next;
        curr2->next=next1;
        curr1=curr2;
      next1=curr2;


    }
    else{

                curr1=curr1->next;
                next1=next1->next;
                

    }
    }
}

*/   
int main(){
/*
void pritn(head){
if(head1 == null){
    return head2;

}
if(head 2== null){
    return head 1;
}
else{
    if(head1->data>=head2->data){
        solve(head1,head2);
    }
    if(head2->data>=head1->data){
        solve(head2,head1);
    }
}

}
*/
}