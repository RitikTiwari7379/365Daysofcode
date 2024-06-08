#include <iostream>
using namespace std;

//  User function template for C++

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};



class Solution
{
public:
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        Node* temp = NULL;

        while (curr != NULL) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    Node* addOne(Node* head) {
        head = reverseList(head);

        Node* temp = head;
        int carry = 1;

        while (temp != NULL) {
            int sum = temp->data + carry;
            temp->data = sum % 10;
            carry = sum / 10;
            if (carry == 0) break; 
            temp = temp->next;
        }
        
        if (carry != 0) {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new Node(carry);
        }


        head = reverseList(head);

        return head;
    }
};