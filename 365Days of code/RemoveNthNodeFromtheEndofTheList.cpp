#include <iostream>
#include<vector>
using namespace std;

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==nullptr){
            return 0;
        }
        ListNode * current  = head;
        ListNode * temp = head;
        int a = 0;
        vector<int> vec;
        while(current!=nullptr){
            a = current->val;
            vec.push_back(a);
            current = current->next;
        }
        a = vec.size()-n;
        if(temp->next==nullptr){
            return 0;
        }
        int c = 0;
        while(temp!=nullptr && temp->next != nullptr){
            if(a==0){
                head = head->next;
                break;
            }
            c++;
            if(c == a){
                temp->next = temp->next->next;
                break;
            }
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};