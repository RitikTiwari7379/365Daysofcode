#include <iostream>
using namespace std;

//  * Definition for singly-linked list.
  struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // 1st way

        // vector<int> vec;
        // if(list1==NULL) return list2;
        // if(list2==NULL) return list1;
        
        // ListNode * current = list1;
        // ListNode * temp = list2;
        // while(current!=nullptr){
        //     int a = current->val;
        //     vec.push_back(a);
        //     current = current->next;
        // }

        // while(temp!=nullptr){
        //     int a = temp->val;
        //     vec.push_back(a);
        //     temp = temp->next;
        // }
        // sort(vec.begin(), vec.end());
        
        // ListNode* result= new ListNode(-1);
        // ListNode* tail = result;

        // for(int i=0;i<vec.size();i++){
        //     result->next = new ListNode(vec[i]);
        //     result = result->next;
        // }
        // tail=tail->next;
        // return tail;
        

        // 2nd  way(optimised way)
        // if(list1==NULL) return list2;
        // if(list2==NULL) return list1;
        
        // ListNode* result = new ListNode(-1);
        // ListNode * tail = result;
        // while(list1!=nullptr && list2!=nullptr){
        //     if(list1->val<=list2->val){
        //         tail->next = list1;
        //         list1 = list1->next;
        //     }
        //     else{
        //        tail->next = list2;
        //        list2 = list2->next;
        //     }
        //     tail = tail->next;
        // }
        // if(list1 != nullptr) {
        //     tail->next = list1;
        // }   
        // else {
        //    tail->next = list2;
        // }
        // return result->next; 
        
        // 3rd way

        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode* current = list1;
        ListNode* temp = list2;
        ListNode* result = new ListNode(-1); 
        ListNode* tail = result;

        while(current != nullptr && temp != nullptr) {
            if(current->val <= temp->val) {
              tail->next = new ListNode(current->val);
              current = current->next;
            }
            else {
              tail->next = new ListNode(temp->val);
              temp = temp->next;
            }
           tail = tail->next; 
        }

        while(current != nullptr) {
           tail->next = new ListNode(current->val);
           current = current->next;
           tail = tail->next;
        }

        while(temp != nullptr) {
           tail->next = new ListNode(temp->val);
           temp = temp->next;
           tail = tail->next;
        } 
        return result->next;
    }
};