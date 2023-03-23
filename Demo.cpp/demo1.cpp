#include <iostream>
#include<math.h>
#include<algorithm>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int a)
    {
        this->val = a;
        this->next = NULL;
    }
};
node*insertathead(node*&head,int val){
    node*newnode = new node(val);
    newnode->next = head;
    head = newnode;
    return head;
}
void print(node*&head){
    node*temp = head;
    while(temp != NULL){
        cout<<temp->val<<endl;
        temp =temp->next;
    }
}
int main()
{
node*head = NULL;
node*newnode = new node(4);
insertathead(head,4);
insertathead(head,5);
insertathead(head,6);
insertathead(head,7);
print(head);


}