// 2. Add Two Numbers

// You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

// You may assume the two numbers do not contain any leading zero, except the number 0 itself.

 

// Example 1:


// Input: l1 = [2,4,3], l2 = [5,6,4]
// Output: [7,0,8]
// Explanation: 342 + 465 = 807.
// Example 2:

// Input: l1 = [0], l2 = [0]
// Output: [0]

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

class ListNode{
    public:
    int val;
    ListNode* next;
    
    ListNode(int data){
        val = data;
        next = NULL;
    }
};

void insert(ListNode* &head,int val){
    if(head == NULL){
        head = new ListNode(val);
        return; 
        }
    ListNode* newNode = head;
    while( newNode->next != NULL ){
        newNode = newNode->next;
    }
    newNode->next = new ListNode(val);  
}  


class Solution {
public:
     
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL)
            return NULL;
        if(l1==NULL)return l2;
        if(l2==NULL)return l1;
        ListNode* t = NULL;
        ListNode* head=NULL;
        ListNode* p=l1;
        ListNode* q=l2;
        int carry=0;
        while(p!=NULL || q!=NULL){
            int sum=0;
            if(p!=NULL){
                sum+=p->val;
            }
            if(q!=NULL)
                sum+=q->val;
            sum+=carry;
            carry=sum/10;
            ListNode* k = new ListNode(sum%10);
            if(head==NULL){
                t=k;
                head=t;
            }
            else{
                t->next=k;
                 t=t->next;
            }
           if(p!=NULL)
            p=p->next;
            if(q!=NULL)
            q=q->next;
        }
    
        if(carry>0){
            ListNode* k = new ListNode(carry);
            t->next=k;
        }
        return head;
    }};

void print(ListNode* head){
    while( head != NULL){
        cout<<head->val<<" ";
        head = head->next;
}}

int main(){
    Solution sol;
    ListNode* l1 = NULL;
    ListNode* l2 = NULL;
    
    for(int j = 0;j<7;j++)
    insert(l1,9);
   
    for(int j = 0;j<4;j++)   
    insert(l2,9);

    // insert(l2,34);

    // printSum(l1);

    // addTwoNumbers(l1,l2);
 
     print(sol.addTwoNumbers(l1,l2));
    return 0;
}

