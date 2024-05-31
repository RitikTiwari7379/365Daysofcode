#include <iostream>
using namespace std;

//User function template for C++



struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

};

class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // 1st way 
        
        // if(head==NULL){
        //     return false;
        // }
        // struct Node * current = head;
        // while(current!=NULL && current->next!=NULL){
        //     current->data = 2000;
        //     if(current->data == current->next->data){
        //         return true;
        //     }
        //     current = current->next;
        // }
        // return false;
        
        // 2nd way(Floyd algorithm)
        
        struct Node * slow = head;
        struct Node * fast = head;
        while(fast!= NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
           
        }
        return false;
    }
};