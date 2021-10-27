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
    int data;
    ListNode* nextNode;

    ListNode(int val){
        data = val;
        nextNode = NULL;
    }
};

 void push(ListNode* &node,int val){
       if(node == NULL)
       node = new ListNode(val);
        
       ListNode* newNode = node;
       while( newNode->nextNode != NULL){
           newNode = newNode->nextNode;
       }
       newNode->nextNode = new ListNode(val);
    }

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* node ;
     int sum = 0;
     int carry = 0;
       while( l1->nextNode != NULL ){
         
            if(l1->data + l2->data < 10)
            sum = l1->data+l2->data + carry;
            else{
                sum = (l1->data + l2->data) % 10 ;
                carry = (l1->data + l2->data) / 10;
            }  
            push(node,sum);
            l1 = l1->nextNode;
           l2 = l2->nextNode;
       } 
         
       return node;
 }


void printSum(ListNode* node){
    while( node->nextNode != NULL){
        cout<<node->data;
    }
}

int main(){
    ListNode* l1 = new ListNode(2);
    ListNode* l2 = new ListNode(5);

    push(l1,7);
    push(l1,3);
    push(l2,6);
    push(l2,4);

    // addTwoNumbers(l1,l2);
    printSum(addTwoNumbers(l1,l2));
    return 0;
}

