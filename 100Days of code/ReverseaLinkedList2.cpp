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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      
        if(head==nullptr){
            return 0;
        }
        vector<int> vec;
        ListNode* current = head;
        while(current!=nullptr){
            int a = current->val;
            vec.push_back(a);
            current = current->next;
        }
        while(left<=right){
            swap(vec[left-1], vec[right-1]);
            right--;
            left++;
        }
        int k = 0;
        ListNode* temp = head;
        while(temp!=nullptr){
            temp->val = vec[k];
             k++;
            temp = temp->next;
        }
        return head;

        // 2nd optimised way

        // ListNode* temp = head;
        
        // for (int i = 0 ; i < left-1 ; i++){
        //     temp = temp->next;
        // }

        // ListNode* start = new ListNode(-1);
        // ListNode* temp1 = start;
        // vector<int> between;
        // for (int i = 0 ; i <= right - left ; i++){
        //     between.push_back(temp->val);
        //     temp = temp->next;
        // }

        // for (int i = between.size() - 1 ; i >= 0 ; i--){
        //     start->next = new ListNode(between[i]);
        //     start = start->next;
        // }

        // start->next = temp;


        // if (left == 1){
        //     head = temp1->next;
        // }
        // else{
        //     temp = head;
        //     for (int i = 0 ; i < left-2 ; i++){
        //         temp = temp->next;
        //     }

        //     temp->next = temp1->next;
        // }

        // return head;
    }
};