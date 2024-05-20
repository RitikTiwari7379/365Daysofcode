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
    bool isPalindrome(ListNode* head) {
        vector<int> vec;
        ListNode * current = head;
        while(current!= nullptr ){
            int a = current->val;
            vec.push_back(a);
            current = current->next;
        }
        int i = 0;
        int j = vec.size()-1;
        while(i<j){
            if(vec[i]!=vec[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};