#include <iostream>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int n = 0;
        if(head==nullptr){
            return head;
        }
        ListNode * current = head;
        while(current!=nullptr){
            n++;
            current = current->next;
        }
        if(n==1){
            delete head;
            return nullptr;
        }
        current = head;
        ListNode  * temp = nullptr;
        n /=2;
        int b = 0;
        while(b<n){
           temp = current;
           current = current->next;
           b++;
        }
        temp->next  = current->next;
        delete current;
        return head;

        // optimised code

        if(head->next == NULL)return NULL;
        if(head->next->next == NULL){
            head->next=NULL;
            return head;
        }
        ListNode *slow=head, *fast=head->next;
        while(fast->next != NULL && fast->next->next != NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        slow->next=slow->next->next;
        return head;
    }
};