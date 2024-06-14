#include <iostream>
#include<vector>
using namespace std;

//   Reverse a linked list
//   The input list will have at least one element  
//   Return the node which points to the head of the new LinkedList
//   Node is defined as 
    struct node
    {
        int data;
        struct node* next;
    
        node(int x){
            data = x;
            next = NULL;
        }
    
    }*head;


class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        if(head==NULL){
            return NULL;
        }
        vector<int> arr;
        struct node * curr = head;
        while(curr!=NULL){
            int a = curr->data;
            arr.push_back(a);
            curr = curr->next;
        }
        if(k==1){
            return head;
        }
        int s = 0;
        int n = 0;
        for(int i = 0; i<arr.size(); i++){
            n++;
            if(n == k){
                int j = i;
                int x = s;
                while(x<=j){
                    swap(arr[x],arr[j]);
                    x++; 
                    j--;
                }
                s=i+1;
                n=0;
                
            }
            else if(i==arr.size()-1 && n<k){
                int v = i;
                int c = s;
                while(c<=v){
                    swap(arr[c],arr[v]);
                    c++; 
                    v--;
                }
            }
        }
        
        struct node * temp = head;
        int q = 0;
        while(temp!=NULL){
            temp->data = arr[q];
            q++;
            temp = temp->next;
        }
        return head;
    }
};