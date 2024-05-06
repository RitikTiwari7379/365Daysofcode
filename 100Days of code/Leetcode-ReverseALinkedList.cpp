#include <iostream>
#include<vector>
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
    ListNode* reverseList(ListNode* head) {
       // 1st way(optimised approach)

        ListNode * temp = nullptr;
        ListNode* prev = nullptr;
        ListNode * current = head;
        while(current != nullptr){
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }
        head = prev;

        // 2nd approach(Less optimised)

        vector<int> vec;
        ListNode* current = head;
        while(current != nullptr){
            vec.push_back(current->val);
            current = current->next;
        }
    
        current  = head;
        int i = vec.size()-1;
        while(current != nullptr){
            current->val = vec[i--];
            current = current->next;
        }
        return head;
    }
};