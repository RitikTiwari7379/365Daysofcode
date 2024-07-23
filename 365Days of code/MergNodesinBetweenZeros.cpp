#include <iostream>
using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        if(head==nullptr && head->next!=nullptr) return 0;
        ListNode * temp = head->next;
        ListNode * result = new ListNode(-1);
        ListNode * temp1 = result;
        int sum = 0;
        while(temp!=nullptr){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                temp1->next = new ListNode(sum);
                temp1 = temp1->next;
                sum = 0;
            }
            temp = temp->next;
        
        }
        return result->next;
    }
};