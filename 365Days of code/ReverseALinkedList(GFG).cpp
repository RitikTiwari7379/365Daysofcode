#include<iostream>
using namespace std;\

struct Node{
    int data;
    struct Node * next;
    Node(int x){
        data  = x;
        next = NULL;
    }
};
// struct Node{
//     int data;
//     struct Node * next;
// }
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        
        struct Node * current = head;
        struct Node *temp = NULL;
        struct Node *prev = NULL;
        while(current != NULL){
            temp = current->next;
            current->next = prev;
            prev = current;
            current  = temp;
        }
        head = prev;
        return head;
    }
    
};
int main(){
    struct Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    struct Node *temp = head;
    cout<<"Original Linked List: "<<endl;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<< endl;

    Solution  obj;
    head  = obj.reverseList(head);

    temp = head;
    cout<<"Reversed Linked List: "<<endl;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<< endl;

}