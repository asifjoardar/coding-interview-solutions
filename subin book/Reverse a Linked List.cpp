#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** n, int new_data){
    Node* new_node = new Node();
    Node* last = *n;
    new_node->data = new_data;
    new_node->next = NULL;
    if(*n == NULL){
        *n = new_node;
        return;
    }
    while(last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}

void print(Node* n){
    while(n != NULL){
      cout<<n->data<<” ”;
      n = n->next;
    }
    cout<<endl;
}

void reverse(Node** n){
    Node* tem = NULL;
    Node* prev = NULL;
    Node* cur = (*n);
    while(cur != NULL){
        tem = cur->next;
        cur->next=prev;
        prev = cur;
        cur = tem;
    }
    *n = prev;
}

int main(){
    int i,n,num;
    Node* head = NULL;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        push(&head, num);
    }
    print(head);
    reverse(&head);
    print(head);
    return 0;
}
