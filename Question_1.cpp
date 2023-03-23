#include <iostream>
using namespace std;
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
void insert(node *&tail, int value, int d)
{
    node *newnode = new node(d);
    if (tail == NULL)
    {
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        tail->next = newnode;
        newnode->next = tail;
        tail = newnode;
    }
}
void print(node *&tail)
{
    node *temp = tail;
    // while(temp = tail){
    //     cout<<temp->data<<endl;
    //     temp=temp->next;
    // }
    do
    {
        cout << temp->data << endl;
        temp = temp->next;
    } while (temp != tail);
}
int main()
{
    node *node1 = new node(67);
    node *tail = node1;
    print(tail);
    // How to tell wether a given linked list is circular or not//
}

/*
bool iscircular(node*&head){
    node*temp=head;
    if(head==null){
        return true;
    }
    do{
temp=temp->next;
    }
    while(temp !=null && temp != head);
    if(temp ==null){
        return false;
    }
    else{return true;}


}


*/
