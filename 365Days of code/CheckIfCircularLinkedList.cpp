#include <iostream>
using namespace std;

// Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 


/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
    Node * current = head;
    if(head == NULL ){
        return 0;
    }
    Node * temp = head->next;
    while( current != NULL && temp!=NULL && temp->next!=NULL){
        if(current == temp || current == temp->next){
            return 1;
        }
        current = current->next;
        temp = temp->next->next;
    }
    return 0;
}