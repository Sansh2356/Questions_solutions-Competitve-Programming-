#include<iostream>
#include<vector>
using namespace std;
//Q)Add two numbers using linked list//
  //Definition for singly-linked list.//
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {};
 };
 
class Solution {
public:
   int length(ListNode*l1){
        ListNode*temp = l1;
        int count=0;
        while(temp != 0){
            count++;
            temp=temp->next;
        }
        return count;
    }
    void sum(ListNode*l1,ListNode*l2,int carry,vector<int>&ans,int length1,int length2){
        while(l1 != NULL && l2 != NULL ){
            if(l1->val + l2->val +carry <= 9){
                ans.push_back(l1->val + l2->val +carry);
                carry = 0;
            }
            else if(l1->val + l2->val +carry > 9){
                int sum = l1->val + l2->val +carry;
                int digit = sum%10;
                ans.push_back(digit);
                carry = sum/10;
            }
            l1 = l1->next;
            l2 = l2->next;
          
        }
        if(l1 == NULL && carry > 0){
            ans.push_back(carry);
            
        }
        while(l1 != NULL){
            if(l1->val + carry > 9){
                int sum2 = l1->val + carry;
                int digit2 = sum2%10;
                ans.push_back(digit2);
                carry = sum2/10;
                if(l1->next == NULL){
                    ans.push_back(carry);
                }
            }
            else if(l1->val + carry <=9){
                ans.push_back(l1->val+carry);
                carry = 0;
            }
            l1 = l1->next;
        }
        

        
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            int carry = 0;
            int length1=length(l1);
            int length2=length(l2);
            vector<int>ans;
            if(length1>length2){
                sum(l1,l2,carry,ans,length1,length2);
            }
            else if(length2>length1){
                sum(l2,l1,carry,ans,length1,length2);
            }
            else{
                sum(l1,l2,carry,ans,length1,length2);
            }
           ListNode*newnode = new ListNode(ans[0]);
           ListNode*head = newnode;
           for(int k=1;k<ans.size();k++){
               ListNode*temp = new ListNode(ans[k]);
               newnode->next = temp; 
               newnode = newnode->next;
              
           }
          return head;
           
           
         
    }
};