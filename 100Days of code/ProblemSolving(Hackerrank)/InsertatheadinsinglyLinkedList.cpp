#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Node{
    public:
    int data;
    Node * next ;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertathead(Node * &head, int d){
    Node * temp = new Node(d);
    temp->next = head;
    head = temp;
}

void display(Node*&head){
    Node * current = head;
    while(current!=NULL){
        cout<<current->data<<endl;
        current = current->next;
    }
}
int main() {
    int n;
    cin>>n;
    int data = 0;
    Node * head = NULL;
    while(n!=0){
       cin>>data;
       insertathead(head , data);
       n--;
    } 
    display(head);
      
    return 0;
}
