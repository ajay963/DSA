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
     
    ListNode* addTwoNumbers(ListNode* &l1,ListNode* &l2) {
     ListNode* temp = NULL;
     insert(temp,1);
     ListNode* sumLL = temp;
     int sum = 0;
     int carry = 0;
       while( l1 != NULL || l2 != NULL){
            
            int l1D = (l1 != NULL )? l1->val : 0 ;
            int l2D = (l2 != NULL )? l2->val : 0 ;

            if(l1D + l2D + carry < 10){
            sum = l1D + l2D + carry;
            carry = 0;}
            else{
                sum = (l1D + l2D +carry ) % 10 ;
                carry = (l1D + l2D + carry) / 10;
            }  
            insert(temp,sum);
            if(l1 != NULL)
            l1 = l1->next;
            
            if(l2 != NULL)
            l2 = l2->next;

            
       } 
         if(carry != 0)
         insert(temp,carry);

         return sumLL->next;
    }
};

void printSum(ListNode* head){
    while( head != NULL){
        cout<<head->val;
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
    printSum(sol.addTwoNumbers(l1,l2));
    return 0;
}

