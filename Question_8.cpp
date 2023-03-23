#include <iostream>
using namespace std;
#include <vector>
// Q)Check palindrome in a linked list//
vector<int> v;
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
bool reversearray(vector<int> vector)
{
    for (int x = 0; x < vector.size() / 2; x++)
    {
        if (vector[x] != vector[vector.size() - 1 - x])
        {
            return false;
        }
    }
    return true;
}
void checkpalindrome(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    reversearray(v);
}

int main()
{
}