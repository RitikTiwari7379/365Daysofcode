#include <iostream>
using namespace std;


//  Definition for singly-linked list.
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
    //  Approach 1(Floyd algorithm)

        // if (head == nullptr || head->next == nullptr) {
        //     return false; 
        // }

        // ListNode *slow = head;
        // ListNode *fast = head->next;

        // while (fast && fast->next) {
        //     if (slow == fast) {
        //         return true; // Cycle detected
        //     }
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }

        // return false; 

        //  2nd version of above
        ListNode *slow = head;
        ListNode *fast = head ? head->next : nullptr;

        while (fast) {
            if (slow == fast) {
                return true; 
            }
            slow = slow->next;
            fast = fast->next ? fast->next->next : nullptr;
        }

        return false; 
       
    // Appproach 2(more optimised)
        // while(head != NULL){
        //     if(head->val == 200000) return true;
        //     head->val = 200000;
        //     head = head->next;
        // }
        // return false;
       
    }
};
