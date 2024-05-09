#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; 

class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    
        //Code here
        struct Node* current = head;
        int count = 0;
        while(current != NULL){
            current = current->next;
            count++;
        }
        
      return count;
    }
};