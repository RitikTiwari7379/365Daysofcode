#include <iostream>
#include<unordered_map>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
       
        // 1st way
        // if(headA==NULL) return NULL;
        // if(headB==NULL) return NULL;
        // ListNode * current = headA;
        // while(current!=NULL){
        //     ListNode * temp = headB;
        //     while(temp!=NULL){
        //         if(current==temp){
        //             return temp;
        //         }
        //         temp = temp->next;
        //     }
        //     current = current->next;
        // }
        // return NULL;

        // 2nd way(optimised)

        // if(headA==NULL) return NULL;
        // if(headB==NULL) return NULL;
        // ListNode * current = headA;
        // ListNode * temp = headB;
        // int n=0;
        // int m=0;
        // while(current!=NULL){
        //     n++;
        //     if(current->next==NULL){
        //         break;
        //     }
        //     current=current->next;
        // }
        // while(temp!=NULL){
        //     m++;
        //     if(temp->next==NULL){
        //         break;
        //     }
        //     temp = temp->next;
        // }
        // if(current!=temp){
        //     return NULL;
        // }
        // else if(n>m){
        //     while(headA!=NULL){
        //         headA = headA->next;
        //         n--;
        //         if(n==m){
        //             while(headA!=NULL && headB!=NULL){
        //               if(headA==headB){
        //                 return headA;
        //               }
        //               headA = headA->next;
        //               headB = headB->next;
               
        //             }
        //         }
        //     }
        // }
        // else if(m>n){
        //     while(headB!=NULL){
        //         headB = headB->next;
        //         m--;
        //         if(n==m){
        //             while(headA!=NULL && headB!=NULL){
        //               if(headA==headB){
        //                 return headA;
        //               }
        //               headA = headA->next;
        //               headB = headB->next;
               
        //             }
        //         }
        //     } 
        // }
        // else{
        //     while(headA!=NULL && headB!=NULL){
        //         if(headA==headB){
        //             return headA;
        //         }
        //         headA = headA->next;
        //         headB = headB->next;
               
        //     }
        // }
        // return NULL;

        // clean version of above(more optimised)

        if(headA==NULL) return NULL;
        if(headB==NULL) return NULL;
        ListNode * current = headA;
        ListNode * temp = headB;
        int n=0, m=0;
        while(current!=NULL){
            n++;
            current=current->next;
        }
        while(temp!=NULL){
            m++;
            temp = temp->next;
        }
        if(n>m){
            while(headA!=NULL){
                headA = headA->next;
                n--;
                if(n==m){
                  break;
                }
            }
        }
        else if(m>n){
            while(headB!=NULL){
                headB = headB->next;
                m--;
                if(n==m){
                   break;
                }
            } 
        }
        while(headA!=NULL && headB!=NULL){
            if(headA==headB){
                return headA;
            }
            headA = headA->next;
            headB = headB->next;
               
        }
        return NULL;

    //    3rd way(most optimised code)
        unordered_map<ListNode*,int>mpp;
        for (auto p = headA ; p!=NULL ; p = p->next){
           mpp[p]=p->val;
        }
        for (auto p = headB ; p!=NULL ; p = p->next){
           if (mpp.find(p)!=mpp.end()) return p;
        }
        return NULL;

    }
};