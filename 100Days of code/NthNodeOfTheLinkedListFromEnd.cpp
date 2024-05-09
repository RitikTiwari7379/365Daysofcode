#include <iostream>
#include<vector>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }

//Function to find the data of nth node from the end of a linked list.
class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node * current = head;
           vector<int> vec;
           int s = 0;
           int a = 0;
           while(current != NULL ){
              vec.push_back(current->data);
              current = current->next;
           }
           
           for(int i = vec.size()-1; i>=0 && a<=n; i--){
               a++;
               if(a==n){
                   s = vec[i];
               }
           }
           if(s == 0){
               return -1;
           }
           return s;
    }
};
