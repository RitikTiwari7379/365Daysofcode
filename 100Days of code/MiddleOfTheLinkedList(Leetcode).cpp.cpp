#include <iostream>
#include<vector>
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
    ListNode* middleNode(ListNode* head) {
        ListNode * current  = head;
        vector<int> vec;
        int n = 0;
        while(current!=nullptr){
           n = current->val;
           vec.push_back(n);
           current  = current->next;
        }
        int s = vec.size()/2;
        int a = 0;
        current  = head;
        while(current!=nullptr){
           if(a==s){
            break;
           }
           a++;
           current = current->next;
           
        }
        return current;
    }
};