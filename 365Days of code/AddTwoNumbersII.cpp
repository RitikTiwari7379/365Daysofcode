//  Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* reverselists(ListNode*& head){
        ListNode* temp  = nullptr;
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr!=nullptr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    int countinglength(ListNode* head){
        ListNode * temp = head;
        int length = 0;
        while(temp!=nullptr){
            length++;
            temp = temp->next;
        }
        return length;
    }
    void insertathead(ListNode * & head, int d){
        ListNode * temp = new ListNode(d);
        temp->next = head;
        head = temp;

    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverselists(l1);
        l2 = reverselists(l2);
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        int sum = 0;
        ListNode * head = nullptr;
        while(temp1!=nullptr && temp2!=nullptr){
            sum = (temp1->val+temp2->val+carry)%10;
            carry = (temp1->val+temp2->val+carry)/10;
            insertathead(head,sum);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while(temp1!=nullptr){
            sum = (temp1->val+carry)%10;
            carry = (temp1->val+carry)/10;
            insertathead(head,sum);
            temp1 = temp1->next;
        }
        while(temp2!=nullptr){
            sum = (temp2->val+carry)%10;
            carry = (temp2->val+carry)/10;
            insertathead(head,sum);
            temp2 = temp2->next;
        }
        if(carry!=0){
            insertathead(head,carry);
        }
        return head;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

//  clearer version of above approach

// class Solution {
// public:
//     ListNode* reverseList(ListNode*& head) {
//         ListNode* temp = nullptr;
//         ListNode* prev = nullptr;
//         ListNode* curr = head;
//         while (curr != nullptr) {
//             temp = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = temp;
//         }
//         return prev;
//     }

//     void insertAtHead(ListNode*& head, int d) {
//         ListNode* temp = new ListNode(d);
//         temp->next = head;
//         head = temp;
//     }

//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         l1 = reverseList(l1);
//         l2 = reverseList(l2);
//         ListNode* temp1 = l1;
//         ListNode* temp2 = l2;
//         ListNode* head = nullptr;
//         int carry = 0;

//         while (temp1 != nullptr || temp2 != nullptr || carry != 0) {
//             int sum = carry;
//             if (temp1 != nullptr) {
//                 sum += temp1->val;
//                 temp1 = temp1->next;
//             }
//             if (temp2 != nullptr) {
//                 sum += temp2->val;
//                 temp2 = temp2->next;
//             }
//             carry = sum / 10;
//             sum = sum % 10;
//             insertAtHead(head, sum);
//         }

//         return head;
//     }
// };
