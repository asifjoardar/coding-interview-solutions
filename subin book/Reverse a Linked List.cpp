#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};

void printlist(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<endl;
}

Node* rev(Node* n){
    Node* tem = NULL;
    Node* prev = NULL;
    Node* cur = n;
    while(cur!=NULL){
        tem = cur->next;
        cur->next = prev;
        prev = cur;
        cur = tem;
    }
    return prev;
}

int main(){
    int i,n,num;
    cin>>n>>num;
    Node* head = new Node(num);
    Node* tail = head;
    for(i=0;i<n-1;i++){
        cin>>num;
        tail->next = new Node(num);
        tail = tail->next;
    }
    printlist(head);
    head = rev(head);
    printlist(head);
    return 0;
}
