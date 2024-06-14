#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {   
        Node * current  = head;
        int n = 0;
        int s = 0;
        while(current != NULL){
           n++;
           current =  current->next;
        }
        
        Node * temp = head;
        if(n%2==0){
            while(temp!=NULL &&s<=n/2 ){
                if(s == n/2){
                    return temp->data;
                }
                s++;
                temp = temp->next;
            }
        }
        else{
            while(temp!=NULL &&s<=n/2 ){
                if(s == n/2){
                    return temp->data;
                }
                s++;
                temp = temp->next;
            }
            
        }
        // Your code here
    }
};
